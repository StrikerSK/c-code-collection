#include <stdio.h>

void addValue(int *a, int b) {
    *a = *a + b;
}

int main() {
    int a, b;

    printf("Input initial value: ");
    scanf("%d", &a);

    printf("Input power value: ");
    scanf("%d", &b);

    printf("Values before addValue(): a = %d, b = %d\n", a, b);
    addValue(&a, b);
    printf("Values before addValue(): a = %d, b = %d\n", a, b);

    return 0;
}