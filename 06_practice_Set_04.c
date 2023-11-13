//write a program using a function which calculate the sum and average of two numbers. Use pointers and print the values of sum and average in main()

#include<stdio.h>

void SumandAverage(int a,int b,int *sum,float *avg)        //interview question 
{
    *sum=a+b;
     *avg=*sum/2;
   
}
int main(){
int i,j,sum;
float avg;
i=3;
j=6;
SumandAverage(i,i,&sum,&avg);
printf("The value of the sum is %d\n",sum);
printf("The value of the avg is %f\n",avg);
    return 0;
}