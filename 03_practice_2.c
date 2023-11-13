#include<stdio.h>

int main(){

int physics,chemistry,maths ;
float total;

printf("Enter physics marks:");
scanf("%d",&physics);

printf("Enter chemistry marks:");
scanf("%d",&chemistry);

printf("Enter maths marks:");
scanf("%d",&maths);

total=(physics+chemistry+maths)/3;

if((total<40) || physics < 33 || chemistry < 33 || maths < 33){
    printf("your total percentage is %f and you are failed\n",total);
}
else
{
    printf("your total percentage is %f and you are passed\n",total );
}


    return 0;
}