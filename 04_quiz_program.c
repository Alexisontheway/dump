//write a program to print natural numbers from 10 to 20 . when initial loop counter is initialized to 0...

#include<stdio.h>

//the loop counter need not be int , it can be float as well.

int main(){
int i=0;
while(i<=20){
    if(i>=10)
    {
        printf("The value of i is %d\n",i);

    }
    i++;                      //increament operator..  i=i+1;;
}
    return 0;
}