#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%f", &a);

    if (a % 5 == 0 )
        printf("Divisible by 5");
    else if (a % 11 == 0 )
        printf("divisible by 11");
    else
        printf("Not divisible by both 5 and 11");

    return 0;
}
