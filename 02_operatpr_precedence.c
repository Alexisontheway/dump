#include<stdio.h>

int main(){
int x=4;
int y=9;
int c=1,d=2;
//in the c language boadmas rule is not eligible .. 
//priority 1: * / %    2:+ -          3: =
printf("The value of 3*x - 8*y is %d\n",3*x-8*y);
//in the presence of parenthisis
printf("The value of 3*x -8*y is %d\n",3*(x-8*y));
printf("The value of 8*c/3*d is %d",8*c/3*d);
//will give a wrong answer.
//follow left to right associativity..

    return 0;
}