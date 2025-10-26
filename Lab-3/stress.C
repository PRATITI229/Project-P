#include<stdio.h>
int main()
{
     float fos,x,y ;
     printf("Enter the Material yeild strength in MPa: ");
     scanf("%d",&x);
     printf("Enter the Applied stress in MPa: ");
     scanf("%d",&y);
     fos=x/y;
     if (fos>=2.0){
     printf("Safe Design!");
     }
     else if (fos>=1.5 && fos<2.0){
     printf("Acceptable with monitering!");
     }
     else if (fos<1.5){
         printf("Danger-redesign needed!");
     }
     return 0;
}