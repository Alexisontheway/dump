#include<stdio.h>

void printpattern(int n);
int main(){

int n;
printf("Enter any number:");
scanf("%d",&n);
printpattern(n);



    return 0;
}

void printpattern(int n)
{
    if(n==1)
    {
        printf("*\n");
        return;
    }
   
    printpattern(n-1);
    for(int i=0;i<(3*n-1);i++)                                  //(2*n-1) is the formula we can change or modify according to our requirenment...
    {
        printf("*");
    }
    printf("\n");
}