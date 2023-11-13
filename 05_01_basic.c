#include <stdio.h>

// function prototype

void display();        //function protocol

int main()
{
    int a;
    printf("Initializing display function\n");
    display();          //function call
    printf("Display function finished its work\n");
    return 0;
}
void display()          //function defination
{
    printf("This is display\n");
}