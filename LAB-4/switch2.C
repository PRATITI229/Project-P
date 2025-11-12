#include<stdio.h>
int main() {
    int number;
    float a,b;
    printf("Enter the value a: ");
    scanf("%f", &a);
    printf("Enter the value b: ");
    scanf("%f", &b);
    printf("Enter a number between 1 and 4: ");
    scanf("%d", &number);
    switch (number) {
        case 1:
            printf("Addition: %f\n", a + b);
            break;
        case 2:
            printf("Subtraction: %f\n", a - b);
            break;
        case 3:
            printf("Multiplication: %f\n", a * b);
            break;
        case 4:
            if(b != 0)
                printf("Division: %f\n", a / b);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("INVALID!\n");
    }
    
}