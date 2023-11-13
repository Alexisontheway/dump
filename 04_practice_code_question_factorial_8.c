//write a program to calculate the factorial of a given number using a for loop..
#include<stdio.h>

int main(){

int n,factorial=1;
printf("Enter a number:");    //this is an additional feature that i have been added for some extra convinient.
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
    factorial *=i;
}
printf("The value of factorial is %d is %d ", n , factorial);
    return 0;
}