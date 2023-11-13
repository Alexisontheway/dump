//write a program to print tne value of a variable i by suing 'pointer to pointer ' type of variable.

#include<stdio.h>

int main(){
int i=365;
int *ptr;
int **_ptr;

ptr=&i;
_ptr=&ptr;
printf("The value of i is : %d\n",**_ptr);
printf("The value of *ptr is : %d\n",ptr);
printf("The address of the variable is %u\n",&i);

    return 0;
}