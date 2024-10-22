#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max],front=-1,rear=-1,count=0;
void enqueue()
{
  int elem;
  if(count==max)
  {
    printf("Circular Queue is full\n");
  }
  else
  {
    printf("Enter the element to be enqueued\n");
    scanf("%d",&elem);
    if(front==-1)
    {
      front=0;
    }
    rear=(rear+1) % max;
    queue[rear]=elem;
    count++;
    printf("%d enqueued to the queue\n",elem);
  }
}   
void dequeue()
{
  if(count==0)
  {
    printf("Circular queue is empty,no element to deqeued\n");
  }
  else
  {
   printf("Dequeued element:%d\n",queue[front]);
   front=(front+1) % max;
   count--;
  }
}   
void display()
{
  int i;
  if(count==0)
  {
    printf("Circular queue is Empty\n");
  }
  else
  {
    int j=front;
    printf("Queue elements are:\n");
    for(i=0;i < count;i++)
    {
       printf("%d\n",queue[j]);
       j=(j+1) % max;
    } 
  }
}
void main()
{
  int ch;
   while (1)
   {
     printf("\n\n--Circular queue operations--\n\n");
     printf("1.Enqueue\n");
     printf("2.Dequeue\n");
     printf("3.Display\n");
     printf("4.Exit\n");
     printf("Enter your choice:\n");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:
         enqueue();
         break;
       case 2:
          dequeue();
          break;
       case 3:
          display();
          break;
       case 4:
         exit(0);
       default:
         printf("Invalid Choice,try again");
      }
    }
}      
            
     
