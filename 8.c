#include <stdio.h>
#include <string.h>
#include <ctype.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;
    return result;
}

int main() {
    char word[15];  
    printf("Введіть слово: ");
    scanf("%s", word);

    int length = strlen(word);
    int freq[256] = {0};  

    for (int i = 0; i < length; ++i) {
        freq[(unsigned char)word[i]]++;
    }

    unsigned long long total = factorial(length);
    for (int i = 0; i < 256; ++i) {
        if (freq[i] > 1) {
            total /= factorial(freq[i]);
        }
    }

    printf("Кількість анаграм: %llu\n", total);
    return 0;
}
