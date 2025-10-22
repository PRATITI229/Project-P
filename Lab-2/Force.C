#include<stdio.h>
int main()
{
    int m,a,F;
    printf("Enter the value of mass(m): ");
    scanf("%d",&m);
    printf("Enter the value of acceleration(a): ");
    scanf("%d",&a);
    F = m * a;
    printf("Force(F) = %d",F);
    return 0;
}