#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of tensile a: ");
    scanf("%d",&a);
    printf("Enter the value of tensile b: ");
    scanf("%d",&b);
    if (a>b){
        printf("the biggest tensile value is a: %d",a);
    }
       else if (b>a){
            printf("the biggest tensile value is b: %d",b);
        }
    else{
        printf("the values are equal");

    }
}