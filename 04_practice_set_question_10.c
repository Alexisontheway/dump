//wrtie a program to check whether a given number is prime or not using loops..

//prime numbers => a number which is divisible by 1 and itself.

#include<stdio.h>

int main(){

int a,prime=0;
printf("Enter a number:");
scanf("%d",&a);
for(int i=2;i<a;i++)
{
if(a%i==0)
{
    prime = 1;
    break ;
}
}
if(prime==1)
{
    printf("Thid is not a prime number");

}
else{
    printf("This is a prime number");
}
    return 0;
}