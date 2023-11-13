//write a recursive function to calculate the sum of first n natural numbers..

#include<stdio.h>

int natural(int n);
int main(){
int a;
printf("Enter a number:");
scanf("%d",&a);
for(int i=0;i<=a;i++)
{
    printf("The sum of the n th number is %d:",natural(a));
}
    return 0;
}
int natural (int n)
{
    int sum;
    if(sum==0 || sum==1)
    {
        return 1;
    }else
    {
        sum=n
    }
}