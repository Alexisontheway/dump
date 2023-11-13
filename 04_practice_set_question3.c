//write a program to sum first ten natural numbers using while loop..
#include<stdio.h>

int main(){

   int i=0,sum=0,n=10;
//    for(i=0;i<=n;i++)
//    {
//     sum +=i;
//     printf("%d\n",sum);
//    }
while(i<=n)
{
    sum +=i;
    printf("%d\n",sum);
    i++;
}

    return 0;
}