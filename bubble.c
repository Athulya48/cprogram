#include <stdio.h>

void bubblesort(int arr[], int n) 
{
    int i,j;
    for (i=0;i<n-1;i++) 
    {
        for (j=0;j<n-i-1;j++) 
        {
            if(arr[j]>arr[j+1]) 
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void main() {
    int n;
    printf("Enter limit for the array:\n ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
    bubblesort(arr,n);
    printf("Sorted array:\n ");
    for (int i=0;i<n;i++) 
    {
        printf("%d\n",arr[i]);
    }
}
