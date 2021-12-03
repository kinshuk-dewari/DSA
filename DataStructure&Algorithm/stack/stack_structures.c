#include<stdio.h>
#include<stdlib.h>

#define max 10

struct stack 
{
    int top;
    int  a[max];
};

typedef struct  stack STACK;
STACK s;

void push()
{
    int data=0;
    if(s.top==(max-1))
    {
       printf("the stack is full\n");
    }   
    else
    {
        s.top+=1;
        printf("Enter the element :");
        scanf("%d",&data);   
        s.a[s.top]=data;     
    }
    return;
}

void pop()
{
  if(s.top==-1)
  printf("the stack is empty\n");
  else
  {
    printf("the deleted element is %d\n",s.a[s.top]);
    s.top-=1;
  }
  return;
}

void  display()
{
  if(s.top==-1)
  {
     printf("the stack is empty\n");
     return;
  }
 
  else
  {
    printf("The elements of  the stack are :\n");
    for(int i=s.top;i>=0;i--)
    {
      printf("%d ",s.a[i]);
    }
  }
  return;
}
void peek()
{
  if(s.top==-1)
  printf("the  stack is empty\n");
  else
  printf("the top element of the stack is %d\n",s.a[s.top]);
}
int main()
{
  
    int choice;
    s.top=-1;

    printf("\nSTACK IMPLEMENTATION  USING STRUCTURE\n");
    
       
   do
    {
        printf("\n\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\nEnter your choice :");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 :
          { 
              push();
              break;
          }
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            break;

        
        default:
            printf("Wrong choice\n");
            break;
        }
        fflush(stdin);
    } while (choice!=5);
    return 0; 
    
}
