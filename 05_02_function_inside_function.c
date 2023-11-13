#include<stdio.h>
//execution of a c program starts from main.

void morning();
void afternoon();
void night();

int main(){

    morning();                  // morning function call directly    and the other two is called indirectly.
    // printf("Now its 12'0 clock\n");
    // // afternoon();
    // printf("Now its sleep time\n");
    // night();
    return 0;
}

void morning()
{
    printf("A very Good morning Alex\n");
    afternoon();
}

void afternoon()
{
    printf("A very Good afternoon Alex\n");
    night();
}

void night()
{
    printf("A very Good NIght Alex\n");
}