#include<stdio.h>

int main(){
int num;
printf("Enter a number\n");
scanf("%d",&num);

if(num==1)
{
    printf("your number is 1\n");

}
else if (num==2)
{
    printf("Your number is 2\n");

}
else if(num ==3)
{
    printf("Your number is 3\n");
}
else 
{
    printf("Its not 1,2 and 3");              //in this program the last else is the optional...
}
    return 0;
}


//operator precedence 
//