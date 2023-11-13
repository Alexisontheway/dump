#include<stdio.h>

int main(){

int i=0,sum,n=10;
do{
    sum +=i;
    printf("%d\n",sum);
    i++;
}
while(i<=n);
    return 0;
}