#include<stdio.h>
int main()
{
    printf("DATE:8/2/23 \nNAME:Bhalodia siddh sanjay \nWAP to calculate number of 0's and 1's in an array \n");
    int i,n,n0=0,n1=0;
    printf("Enter the number of elements in an array \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter 0's and 1's in an array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
        n0=n0+1;
        else if(arr[i]==1)
        n1=n1+1;
    }
    printf("by segregating 0's on left and 1's on right \n");
    for(i=0;i<n0;i++)
    {
        arr[i]=0;
        printf("%d ",arr[i]);
    }
    for(i=n0;i<n;i++)
    {
        arr[i]=1;
        printf("%d ",arr[i]);
    }
}