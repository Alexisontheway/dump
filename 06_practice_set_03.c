//write a program to change the value of a variable to ten times of its current value . write a function and pass the value by reference...

#include<stdio.h>

  int tentimes(int *a)
{
    int b;

    *a=10*(*a);
    b=*a;
    return b;
    //here somehow if we solve the solution in the b variable the output will come different.
    
    //return *a*10;

    // float temp;
    // temp=*a*(10);   these codes are wrong and                not give the result
    // return temp;

    
    
    //printf("The value is now:%d",b);
}
int main(){
int a,e;
//two variable anf the e one is made for assign the value of the call function so it will dont have to type the whole code.

printf("Enter a value :");
scanf("%d",&a);
tentimes(&a);

printf("The value after the call function : %d",a);
    return 0;
}