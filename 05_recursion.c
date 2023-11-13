////recursion-> a function defined in c can call itself. This is called recursion.
//A function calling itself is also called 'recursive function.....'

#include<stdio.h>

int factorial(int x);

int main(){

int a;
printf("Enter a value:");
scanf("%d",&a);
printf("The value of factorial %d is %d",a,factorial(a));
    return 0;
}

int factorial (int x)
{
    printf("Calling factorial %d\n",x);
    if (x==1 || x==0)
    {
        return 1;                //return meaning "value leke lautt loo"
    }
    else
    {
        return x*factorial(x-1);
    }
}

//recursion is sometimes the most direct way to code an algorithm.
//the condition which doesnt call the function any further in a recursive function is called as the base condition.
//sometimes due to a mistake made by the programmer, a recursive function can keep running without returning resulting in a memory error.