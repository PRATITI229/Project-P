#include<stdio.h>
int main(){
    int t1;
    printf("Enter the value of temperature in Celsius(t1): ");
    scanf("%d",&t1);
    if(t1>60 && t1<=80){
        printf("It is safe range!");
    }
    else{
        printf("It is not safe range! ");
    }
    return 0;
}