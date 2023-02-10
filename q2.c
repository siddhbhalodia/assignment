#include<stdio.h>
int main()
{
    printf("DATE:8/2/23 \nNAME:Bhalodia siddh sanjay \nWAP to find factorial of an integer using recursive function \n");
    int fact(int);
    int n,ans;
    printf("Enter the number whose factorial needs to be calculated: \n");
    scanf("%d",&n);
    ans=fact(n);
    printf("%d",ans);
}
int fact(int a)
{
    int b;
    if(a!=1)
    b=a*fact(a-1);
    else if(a==1)
    return (1);
}