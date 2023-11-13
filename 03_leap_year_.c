//write a program to find whether a year entered by the user is a leap year or not . take year as an input from the user...

#include<stdio.h>

int main(){
int a,b,c,d;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter a numnber:");
scanf("%d",&b);
printf("Enter a number:");
scanf("%d",&c);
printf("Enter a number:");
scanf("%d",&d);

if(a>=b && a>=c && a>=d)
{
    printf("%d is the greatest among them.",a);
}
if(b>=a && b>=c && b>=d)
{
    printf("%d is the greatest among them.",b);

}
if(c>=a && c>=b && c>=d)
{
    printf("%d is the greatest among them.",c);

}
if(d>=a && d>=b && d>=c)
{
    printf("%d is the greatest among them.",d);
}


    return 0;
}