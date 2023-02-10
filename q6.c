#include <stdio.h> 
void sort(int arr[],int size){ 
    int i,j,temp; 
    for(i=0;i<size-1;i++){ 
        for(j=0;j<size-i-1;j++){ 
            if(arr[j]>=arr[j+1]) 
            { 
                temp=arr[j]; 
                arr[j]=arr[j+1]; 
                arr[j+1]=temp; 
            } 
        } 
    } 
} 
int main() 
{ 
    printf("DATE:8/2/23 \nNAME:Bhalodia siddh sanjay \nWAP to find second largest and second smallest number \n");
    int size,i; 
    printf("Enter the size of array: "); 
    scanf("%d",&size); 
    int array[size]; 
    printf("Input the element to array: "); 
    for(i=0;i<size;i++) 
        scanf("%d",&array[i]); 
    sort(array,size); 
    printf("The second largest element in array: %d \n",array[size-2]); 
    printf("The second smallest element in array: %d ",array[1]); 
    return 0; 
} 