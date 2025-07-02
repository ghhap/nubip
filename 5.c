#include <stdio.h>

#define MOD 12345

int main() {
    int n;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    int a[n+1], b[n+1], c[n+1];

    a[1] = 1; 
    b[1] = 1;
    c[1] = 0;

    for (int i = 2; i <= n; i++) {
        a[i] = (a[i-1] + b[i-1] + c[i-1]) % MOD;
        b[i] = a[i-1] % MOD;
        c[i] = b[i-1] % MOD;
    }

    int result = (a[n] + b[n] + c[n]) % MOD;

    printf("Кількість шуканих послідовностей: %d\n", result);

    return 0;
}
