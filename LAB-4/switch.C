#include<stdio.h>
int main() {
    int number;
    printf("Enter a number between 1 and 5: ");
    scanf("%d", &number);

    switch (number) {
        case 1:
            printf("Monday.\n");
            break;
        case 2:
            printf("Tuesday.\n");
            break;
        case 3:
            printf("Wednesday.\n");
            break;
        case 4:
            printf("Thursday.\n");
            break;
        case 5:
            printf("Friday.\n");
            break;
        default:
            printf("INVALID!\n");
    }

    return 0;
}