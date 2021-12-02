#include<stdio.h>
#include<stdlib.h>

#define max 10

int a[max];
int top = -1;

void push()
{
    int data;
    if (top == (max-1))
    {
        printf("the stack is full\n");
    }
    else
    {
        top+=1;
        printf("Enter the element to insert in the stack :");
        scanf("%d",&data);
        a[top]=data;        
    }

}
void pop()
{
    if (top==-1)
    {
        printf("the stack is empty\n");
    }
    else
    {
        printf("the deleted  element is %d\n",a[top]);
        top=top-1;
    }
}
void peek()
{
    if(top==-1)
    {
        printf("the stack is empty\n");        
    }
    else
    {
        printf("the top element of th stack is %d",a[top]);
    }
}
void display()
{
    if (top==-1)
    {
        printf("the stack is empty.\n");        
    }
    else
    {
        printf("the elements of the stack are  :\n");
        for(int i=top;i>=0;i--)
        {
            printf("%d  ",a[i]);
        }
    }
}  

int main()
{
    int choice;

    printf("\nSTACK IMPLEMENTATION\n");
    
       
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
    } while (choice!=5);
    return 0; 
    
}
