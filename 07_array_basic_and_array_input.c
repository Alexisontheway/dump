//an array us a collection of similar element..
//it means that one variable is capable of storing multiple values...

//## interview question 
//how many bytes reserve in the storage....
//you should ask the interviewer that "sir it depends on the architecture of your computer that how many byes of integer is there in your computer , lets assume if your integer stores  3 bytes and  we make an array of 4 then 4*3=12 bytes of memory is stored. "

#include<stdio.h>

int main(){
    //naive way to create 4 ints..
// int marks1,marks2,marks3,marks4;
// marks1=34;
// marks2=55;
// marks3=88;
// marks4=99;
int marks[4];
// marks[0]=44;
// marks[1]=55;
// marks[2]=55;
// marks[3]=55;

printf("Enter the value of marks for student 1:\n");
scanf("%d",&marks[0]);

printf("Entee the value of marks for student 2:\n");
scanf("%d",&marks[1]);

printf("Enter the value of marks for student 3:\n");
scanf("%d",&marks[2]);

printf("Enter the value of marks for student 4:\n");
scanf("%d",&marks[3]);

printf("Enter the value of marks for student 5:\n");
scanf("%d",&marks[4]);


printf("The value of marks of student 1:%d\n",marks[0]);
printf("The value of marks of student 2:%d\n",marks[1]);
printf("The value of marks of student 3:%d\n",marks[2]);
printf("The value of marks of student 4:%d\n",marks[3]);
printf("The value of marks of student 5:%d\n",marks[4]);


    return 0;
}