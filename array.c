#include<stdio.h>
#include<stdlib.h>
int a[10],j,k,n,item;
void create()
{
  printf("Enter the size of the array:\n");
  scanf("%d",&n);
  printf("Enter the elements of the array:\n");
  for(j=1;j<=n;j++)
  {
   scanf("%d",&a[j]);
  }
  }
  
  void insert()
  {
   printf("Enter the element to be inserted:\n");
   scanf("%d",&item);
   printf("Enter the position to be inserted:\n");
   scanf("%d",&k);
   n=n+1;
   for(j=n;j>=k;j--)
   {
     a[j+1]=a[j];
   }
   a[k]=item;
   }
   void delete()
   {
    printf("Enter the position of element to be deleted:\n");
    scanf("%d",&k);
    item=a[k];
    for(j=k;j<n;j++)
    {
     a[j]=a[j+1];
    }
    n=n+1;
    printf("Deleted item is : %d\n",item);
    }
    void display()
    {
      printf("New array is:\n");
      for(j=1;j<=n;j++)
      {
      printf("%d",a[j]);
      }
    }
    void main()
    {
     int ch;
     while(1)
     {
       printf("\n\n---ARRAY OPERATIONS MENU---\n\n");
       printf("1.Creation\n");
       printf("2.Insertion\n");
       printf("3.Deletion\n");
       printf("4.Diplay\n");
       printf("5.Exit\n");
       printf("Enter your choice:\n");
       scanf("%d",&ch);
       switch(ch)
       {
         case 1:
            create();
            break;
         case 2:
            insert();
            break;
         case 3:
            delete();
            break;
         case 4:
            display();
            break;
         case 5:
            exit(0);
         default:
             printf("Invalid choice,try again");
      }
     }
    }                           
