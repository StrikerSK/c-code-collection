#include <stdio.h>

void powerValue(int *a, int b) {
    int tmpValue = *a;
    for (int i = 1; i < b; i++) {
        *a = *a * tmpValue;
    }
}

int main() {
    int a, b;

    printf("Input initial value: ");
    scanf("%d", &a);

    printf("Input power value: ");
    scanf("%d", &b);

    printf("Values before powerValue(): a = %d, b = %d\n", a, b);
    powerValue(&a, b);
    printf("Values before powerValue(): a = %d, b = %d\n", a, b);

    return 0;
}

