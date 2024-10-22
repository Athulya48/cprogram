#include <stdio.h>

int binarysearch(int arr[], int n, int key) 
{
    int low=0, high=n-1;
    
    while (low<= high) 
    {
        int mid=low+(high-low)/2;

        if (arr[mid] == key) 
        {
            return mid;
        }

        if (arr[mid]< key) 
        {
            low=mid+1;
        }
        else 
        {
            high=mid-1;
        }
    }

    return -1; 
}

void main() 
{
    int n,key;


    printf("Enter the limit : ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d",&arr[i]);
    }


    printf("Enter the element to search: ");
    scanf("%d",&key);


    int result = binarysearch(arr, n, key);

    if (result != -1) 
    {
        printf("Element found at index %d.\n", result);
    } else 
    {
        printf("Element not found.\n");
    }
}
