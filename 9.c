#include <stdio.h>
#include <math.h>

int min_steps(int x, int y) {
    int distance = y - x;
    int step = 1;
    int steps = 0;
    int total = 0;

    while (total < distance) {
        steps++;
        total += step;
        if (steps % 2 == 0) step++;
    }

    return steps;
}

int main() {
    int x, y;
    printf("Введіть x та y: ");
    scanf("%d %d", &x, &y);

    if (x > y) {
        printf("x має бути менше або дорівнювати y\n");
        return 1;
    }

    int result = min_steps(x, y);
    printf("Мінімальна кількість кроків: %d\n", result);

    return 0;
}

