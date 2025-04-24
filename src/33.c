#include <stdio.h>

int main() {
    int i;
    int sum = 0;

    printf("Enter numbers (separated by spaces): ");
    while ((scanf("%d", &i) == 1)) {
        if (i % 2 == 0)
            sum += i;
        else
            break;
    }

    printf("Even numbers: %d\n", sum);
    return 0;
}
