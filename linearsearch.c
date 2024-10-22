#include <stdio.h>


int linearsearch(int arr[], int n, int key)
{
    for (int i=0;i<n;i++) 
    {
        if (arr[i]==key) 
        {
            return i;
        }
    }
    return -1; 
}

int main() 
{
    int n,key;


    printf("Enter the limit:\n ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }

 
    printf("Enter the element to search: ");
    scanf("%d",&key);


    int result = linearsearch(arr,n,key);

    if (result !=-1) 
    {
        printf("Element found at index %d.\n", result);
    } else 
    {
        printf("Element not found.\n");
    }

    return 0;
}
