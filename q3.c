#include<stdio.h>
int main()
{
    printf("DATE:8/2/23 \nNAME:Bhalodia siddh sanjay \nWAP to move all zeros to end in an array \n");
    int n,i,t,a,j,zero=0;
    printf("Enter number of elements into an array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values into an array: \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
        zero=zero+1;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(j=i;j<n-1;j++)
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("The array by moving all zeros to the end of an array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}