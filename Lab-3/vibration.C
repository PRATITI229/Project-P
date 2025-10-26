#include<stdio.h>
int main()
{
    float amplitude,frequency;
    printf("Enter the value of amplitude: ");
    scanf("%f",&amplitude);
    printf("Enter the value of frequency: ");
    scanf("%f",& frequency);
    if(amplitude>0.5 && (frequency>=20 &&frequency<=50)){
    printf("High risk");}
    else if (amplitude>0.5 || frequency>60){
    printf("Medium risk!");
    }
    else printf("Low risk!");
    return 0;
}