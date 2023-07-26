#include <stdio.h>
#include <conio.h>
void main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Even numbers from %d to 1 are:\n", n);
    int i = n;
    do {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i--;
    } while (i >= 1);

    getch();
}

