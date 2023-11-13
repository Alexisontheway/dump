//calculate income tax paid by an employee to the government as per the slabs mentioned below...

//income slab          tax     2.5-5 lakh           tax 5%  , tax   5.0-10.0 lakh    tax 20% ,above 10.0 lakh      tax 30%......

#include<stdio.h>

int main(){
float tax=0;
int income;
printf("Enter your income \n");
scanf("%d",&income);

if(income>=250000 && income<=500000)
{
    tax=tax+0.05*(income -250000);
}
if(income >= 500000 && income <=1000000)
{
    tax=tax+0.20*(income - 500000);
}
if(income >= 1000000)
{
    tax=tax-0.30*(income -1000000);
}
printf("your net income tax to be paid by 26th of this month is %f\n",tax);

    return 0;
}