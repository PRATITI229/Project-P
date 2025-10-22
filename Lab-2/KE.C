#include<stdio.h>
int main()
{
    int m,v, ke;
    printf("Enter value of m: ");
    scanf("%f",&m);
    printf("Enter value of v: ");
    scanf("%f",&v);
ke=0.5*m*v*v;
    printf("Kinetic energy of the object is:  %2.f",ke);

    return 0;
}