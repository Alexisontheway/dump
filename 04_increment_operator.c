#include<stdio.h>

int main(){
int i=5;
printf("The value after i++ is %d\n",i++);        //first print then increment..
printf("The value after ++i is %d\n",++i);        //first increment then print....

printf("The value after i is %d\n ",i);

i+=10; //--> increment by 10;;;

printf("The value of i is %d\n",i);
//+++ operator is does not exist or more than that is not exist... so kindly dont use this.
    return 0;
}