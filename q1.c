#include<stdio.h>
int main()
{
printf("DATE:8/2/23 \nNAME:Bhalodia siddh Sanjay \nWAP to find sum of digits of an integer using recursive function \n");
int sum(int);
int a,t;
printf("Enter any digit: \n");
scanf("%d",&a);
t=sum(a);
printf("%d",t);
}
int sum(int n)
{
int a,b;
static int ans=0;
a=n%10;
b=n/10;
ans=ans+a;
if(a!=n)
sum(b);
else if(a==n)
return(ans);
}