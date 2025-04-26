#include <stdio.h>

void main() {
    int i;

    printf("Please enter how many numbers you want to add: ");
    scanf("%d", &i);

    if (i > 0) {
        for (i--; i >= 1; --i) {
            printf("*");
        }
        printf("\n");
    } else {
        printf("You cannot add a negative number.\n");
    }
}
