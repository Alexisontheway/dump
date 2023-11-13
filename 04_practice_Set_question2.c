//write a program to print multiplication table of 10 in reverse order..

#include<stdio.h>

int main(){
printf("********** Multiplication table of 10 in reverse order ************\n");
for(int i=10;i;i--)
{
    printf("10 * %d = %d\n",i,i*10);
}
    return 0;
}