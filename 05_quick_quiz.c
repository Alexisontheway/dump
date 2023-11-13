#include<stdio.h>
//execution of a c program starts from main.

void morning();
void afternoon();
void night();

int main(){

    morning();
    printf("Now its 12'0 clock\n");
    afternoon();
    printf("Now its sleep time\n");
    night();
    return 0;
}

void morning()
{
    printf("A very Good morning Alex\n");
}

void afternoon()
{
    printf("A very Good afternoon Alex\n");
}

void night()
{
    printf("A very Good NIght Alex\n");
}