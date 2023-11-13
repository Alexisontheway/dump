// try problem 3 using call by value and verify that it doesnt change the value of the said variable..
#include <stdio.h>

int  tentimes(int a)
{
    int b;
    b=a*10;
    // b=a;
    return b;
    //return a*10;

        //printf("\nThe value after the function call is %d",c);
}
int main()
{
        int a;
        printf("Enter a value:");
        scanf("%d", &a);
        tentimes(a);
      
         printf("The value after the call function is %d\n",a);
        return 0;
}