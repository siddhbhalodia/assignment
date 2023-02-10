#include<stdio.h>
int main()
{
    float a,b;
    printf("this is a program to calculate gross salary of a employee: \nenter your basic salary: ");
    scanf("%f",&a);
    printf("the dearness allowance is taken to be 40 percent and house rent allowance is taken to be 20 percent: \n");
    b=(40*a)/100;
    printf("your gross salary is: %f",b);
    return 0;
}