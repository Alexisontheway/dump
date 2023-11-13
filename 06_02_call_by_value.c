#include <stdio.h>

int sum(int a, int b);
int main()
{
    int a = 4, b = 7;
    printf("The value of a and b is %d and %d\n", a, b);
    printf("The valaue of 4+7 is %d\n", sum(a, b));
    printf("The value of a and b after function call is %d and %d\n",a,b);
    return 0;
}
int sum(int a, int b)
{
    // int c;
    // c=a+b;
    // b=3434;                      this code change nothing in the real program ...
                                    //beacuse the value copies and we cannot change the value of by using a function.
    // a=23432;
    // return c;
    return a + b;
}