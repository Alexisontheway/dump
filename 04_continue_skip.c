#include<stdio.h>

int main(){
int skip=5,i=0;
while(i<10)
{
    i++;
    if(i!=skip)
    {
        continue;
    }else{
        printf("%d\n",i);
    }
}
    return 0;
}
//sometimes , the name of the variable might not indicate the behaviour of the program.
//Break statement completely exits the loop.
//continue statement skips the particular iteration of the loop..