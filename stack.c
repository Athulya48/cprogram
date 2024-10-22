#include<stdio.h>
#include<stdlib.h>
#define max 50
int stack[max];
int top=-1;
void push()
{
  int value;
  if(top==max-1)
  {
    printf("Stack overflow,can't push elements\n");
  }
  else
  {
    printf("Enter the element to be pushed\n");
    scanf("%d",&value);
    top++;
    stack[top]=value;
    printf("%d pushed into stack",value);
  }  
}
void pop()
{
   if(top==-1)
   {
      printf("stack is underflow,no elements available for pop\n");
   }
    else 
    {
       printf("The element %d is popped",stack[top]);
       top--;
    }   
}
void display()
{
  int i;
  if(top==-1)
  {
    printf("Stack is empty");
  }
  else
  {
    printf("Stsck elements are\n");
    for(i=top;i>=0;i--)
    {
      printf("%d\n",stack[i]);
    } 
  } 
}
int main()
{
int ch;
 
  while(1)
  {
    printf("\n----Stack Menu----\n");
    printf("1.PUSH\n");
    printf("2.POP\n");
    printf("3.DISPLAY\n");
    printf("4.EXIT\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
       push();
       break;
      case 2:
       pop();
       break;
      case 3:
       display();
       break;
      case 4:
       exit(0);
       default:
       printf("Invalid choice,please try again.\n");
    }
  }
  return 0;
 }   
