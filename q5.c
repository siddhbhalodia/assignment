#include<stdio.h>
int main()
{
    printf("DATE:8/2/23 \nNAME:Bhalodia siddh sanjay \nWAP to calculate sum of upper triangular matrix \n");
    int i,j,sum=0,arr[3][3];
    printf("Enter the elements into a 3*3 matrix rowwise \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<=j)
            sum=sum+arr[i][j];
        }
    }
    printf("The sum of upper triangular matrix is: %d\n",sum);
}