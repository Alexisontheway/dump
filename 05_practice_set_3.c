//write a function to calculate force of attraction on a body of mass m exerced by the Earth.(g=9.8 m/s2)

// float force(float mass);

// #include<stdio.h>

// int main(){
// float mass;
// printf("Enter the value of mass in kgs\n:-");
// scanf("%f",&mass);
// printf("The value of the force in Newton is : \n %f",force(mass));
//     return 0;
// }

// float force (float mass)
// {
//     float result=(mass*9.8);
//     return result;
// }

#include<stdio.h>
float force(float mass);

int main(){
    float m;
    printf("Enter the value of the mass in kgs:- \n");
    scanf("%f",&m);
    printf("The value of the force in Newton is :  %.2f\n ",force(m));       //%.2(is the feature that now many digits after point.)
    return 0;
}

float force(float mass)
{
    float result=(mass*9.8);
    return result;
}