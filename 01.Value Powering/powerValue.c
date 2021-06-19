#include <stdio.h>

int powerValue(int a, const int b) {
    for (int i = 1; i < b; i++) {
        a = a * a;
    }
    return a;
}

int main() {
    int a, b;

    printf("Input initial value: ");
    scanf("%d", &a);

    printf("Input power value: ");
    scanf("%d", &b);
    
    printf("powerValue() call result: %d\n", powerValue(a, b));

    return 0;
}

