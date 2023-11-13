#include<stdio.h>

int main(){
int age;
printf("Enter your age\n");
scanf("%d",&age);


//age!=90                              here we use relational operator.

//important note '=' is used for assignment where as '==' is used for equality check...

if(age>=90 ){
    printf("YOur are above 90 years old,you cannot drive");

}
else
{
    printf("You can drive\n");
}

//if there is a non zero number then it will considered as true.. 
// and if we write age=50 then it become an assignment operaor.
if (age==50)
{
    printf("Half century...");

}
    return 0;
}