#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);

    if (p < 1 || p >= 30) {
        printf("Некоректне значення p\n");
        return 1;
    }

    long long dp[31][2][3] = {0}; 

    dp[1][0][1] = 1; 
    dp[1][1][1] = 1; 

    for (int i = 2; i <= p; i++) {
        for (int last = 0; last <= 1; last++) { 
            int other = 1 - last;

            dp[i][last][1] = dp[i - 1][other][1] + dp[i - 1][other][2];

            dp[i][last][2] = dp[i - 1][last][1];
        }
    }

    long long total =
        dp[p][0][1] + dp[p][0][2] +
        dp[p][1][1] + dp[p][1][2];

    printf("%lld\n", total);

    return 0;
}
