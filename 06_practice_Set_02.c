//write a program having a variable i . print the address of i pass this variable to a function and print its address . Are these addresses same ? why?


#include<stdio.h>

void printadd(int a)                    //this is the shortcut we can say that helps us to spare sometime ...                               initialize the defination and protocol at the same time.....


{
    printf("The address of variable a is %u\n",&a);
}
int main(){

int i=4;
printf("The value of the variable is %u\n:",i);
printadd(i);
printf("The address of variable i is %u\n",&i);
    return 0;
}