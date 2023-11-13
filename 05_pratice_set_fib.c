// hint:
// fib(n)=fib(n-1)+fib(n-2)
// fib(1)=0
// fib(2)=1

//write a program using recurssion to calculate nth element of fibonachi series..

// #include<stdio.h>

// int fib(int n);

// int main(){

// int c,n;
// printf("Enter the number:");
// scanf("%d",&n);
// for(c=1;c<=n;c++)
// {
//     printf("\t%d",fib(c));
// }
//     return 0;
// }
// int fib(int n)
// {
//     if(n==1 || n==0)
//     {
//         return 1;
        
//     }else
//     {
//         return fib(n-2)+fib(n-1);
//     }
// }


#include<stdio.h>

int fib(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }else
    {
        return fib(n-2)+fib(n-1);
    }
   
};

int main(){

    int b;

printf("Enter the number:");
scanf("%d",&b);
for(int n=1;n<=b;n++)
{
    printf("\t%d",fib(n));
}
    return 0;
}

