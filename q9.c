#include<stdio.h>
int main()
{
    printf("DATE:8/2/23 \nNAME:Bhalodia siddh sanjay \nWAP to find sum and difference of two n*n matrix \n");
    int i,j,n;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    int arr1[n][n],arr2[n][n];
    printf("Enter value into first matrix rowwise: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter value into second matrix rowwise: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The sum of matices is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
    printf("The difference of matrices is \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr1[i][j]-arr2[i][j]);
        }
        printf("\n");
    }
}