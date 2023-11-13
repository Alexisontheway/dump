//write a program using functions to find average of three numbers..

#include<stdio.h>

float average(int a,int b,int c);

int main(){
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
     printf("Enter the value of b:");
    scanf("%d",&b);
     printf("Enter the value of c:");
    scanf("%d",&c);
    printf("The value of average is %f",average(a,b,c));
    return 0;
}

float average(int a,int b,int c)                  //every function has its own local variables...
{
    float result;
    result=(float)(a+b+c)/3;
    return result;
}