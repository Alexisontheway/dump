#include<stdio.h>
#include<math.h>
int main(){

int a=4;
int b=8;
int z=b*a;            //this statement is legal but
//int z;    b*a=z     this is not legal .

printf("The value of z is : %d\n",z );

printf("The value of a+b is : %d\n",a+b);
printf("The value of a-b is : %d\n",a-b);
printf("The value of a*b is : %d\n",a*b);
printf("The value of a/b is : %d\n",a/b);

printf("5 when divided by 2 leaves a remainder of %d\n",5%2);


//no operator is assumed to be present 
//printf("The value of 4*5 os %d\n",(4)(5));            this is wrong..
//printf("The value of 4^5 is %d\n ",4^5);       bitwise xor operator(^)..
//  type conversion      ....         an arithmetic operation between  
//int and int = int ;   int and float = float;    float and float= float;


printf("The value of 5/2 is %d\n",5/2);
printf("The value of 5/2 is %f\n",5.0/2);


    return 0;
}