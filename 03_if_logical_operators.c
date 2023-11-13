#include<stdio.h>

int main(){

int age;
int vipPass=0;
//vipPass=1;
printf("Enter your age \n");
scanf("%d",&age);
                                                              //!vipPass ==1 not operator  make the condition opposite. means true = false and false =true..
if((age<=70 && age >=18)  ||   vipPass == 1)                //the vippass will give you the licence that whether the applied conditions are true                                                      or                                                         false the code will run 
{
    printf("you are above 18 and below 70 , you can drive \n ");
}
else 
{
    printf("YOU cannot drive\n");
}
    return 0;
}