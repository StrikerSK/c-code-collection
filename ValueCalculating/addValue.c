#include <stdio.h>

int addValue(int a, int b) {
    return a + b;
}

int main() {
    int a, b;

    printf("Input initial value: ");
    scanf("%d", &a);

    printf("Input power value: ");
    scanf("%d", &b);

    printf("addValue() call result: %d\n", addValue(a, b));

    return 0;
}