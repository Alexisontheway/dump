// write a function to convert celcius temperature into farenheit...

#include <stdio.h>
#include <math.h>

float temperature(float celsius);

int main()
{
    float degree;
    printf("Enter the degree in celsius->");
    scanf("%f", &degree);
    printf("The degree in farenheit is -> %f", temperature(degree));
    return 0;
}

float temperature(float celsius)
{
    float degree;
    degree = (celsius * 9 / 5) + 32;
    return degree;
}