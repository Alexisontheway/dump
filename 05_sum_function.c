#include <stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output

int sum(int a, int b); // function prototype declaration

int main()
{
    int result;                                //-> a and b are parameters.
    result = sum(2, 4);                        //-> here 2 and 4 are the arguments.
    printf("The value of c is %d", result);
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}

//parameters are the values  or variable placeholders in the function defination.. ex->a & b.
//arguments are the actual values passed to the function to make a call . ex 2 & 3.
//a fucntion can return one value at a time..
//if the passed variable is changed inside the function, the function call doesn't change the value in the calling fucntion..

