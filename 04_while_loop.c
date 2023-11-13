#include<stdio.h>

int main(){
int a;
printf("Enter a number:");
scanf("%d",&a);
while(a<10)                           //while loop -> checks the condition and then                                                         executes the code 
{
    printf("%d\n",a);
    a++;
}
    return 0;
}