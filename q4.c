#include<stdio.h>
int main()
{
    printf("DATE:8/2/23 \nNAME:Bhalodia siddh sanjay \nWAP to rotate array by position k \n");
    int k,j,t,i,n;
    printf("Enter the number of elements into an array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements into an array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of times an array needs to be rotated: \n");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        for(j=0;j<n-1;j++)
        {
            t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
        }
    }
    printf("The array by rotating it %d times is \n",k);
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}