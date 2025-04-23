#include <stdio.h>
int main() {
    int i;
    printf("Enter n values: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            printf("*\t%d\n", i);
        }
    }
    return 0;
}
