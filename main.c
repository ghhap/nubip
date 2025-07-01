#include <stdio.h>

int main() {
    double t1, t2, t3;

    printf("Введіть три значення:\n");
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    double rate = (1.0 / t1) + (1.0 / t2) + (1.0 / t3);
    double total_time = 1.0 / rate;

    printf("Час, необхідний для з'їдання пирога: %.2lf годин\n", total_time);

    return 0;
}
