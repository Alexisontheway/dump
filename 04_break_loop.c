#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("The value of i is %d\n", i);
        if (i == 4)
        {
            break;
        }
        i++;

    } while (i <= 10);

    //this is the example for the do while loop break 

    for (i = 0; i <= 10; i++)
    {
        printf("The value of i is %d\n", i);
        if (i == 5)
        {
            break;
        }
    }

    //this is the example of the for loop break ...

    return 0;
}