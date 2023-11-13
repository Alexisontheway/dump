//wrtite a program to print the address of a variable . use this address to get the value of this variable.

#include<stdio.h>

int main(){
int a=8;
int *ptr;
ptr=&a;
printf("The address of the variable is : %u\n",&a); 
printf("The address of the variable is : %u\n",ptr);
printf("The value of the variable is %d\n",*ptr);

           //sometimes the address could change it depends                                                      where              the value stores.
   
   
    return 0;
}