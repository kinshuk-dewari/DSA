#include<stdio.h>
#include<stdlib.h>

#define max 10
int front=-1,rear=-1;
int queue[max];

void insert()
{
    int item;
    if(rear==max-1)
    {
        printf("queue over flow\n");       
    }
    else
    {
        if (front==-1)
        front=0;                   
        printf("enter the element :");
        scanf("%d",&item);
        queue[++rear]=item;            
    }    
}

void  delete()
{
    if(front==-1||front>rear)
    {
         printf("the queue is empty\n");
        return;
    }
    else
    {
       printf("the deleted element is  %d",queue[front]); 
       front+=1;      
    }
}
void peek()
{
    if(front==-1)
        printf("the queue is empty\n");
    else
    {
       printf("the front is   %d",queue[front]);       
    }
}
void display()
{
    if(front==-1||front>rear)
    {
        printf("the queue is empty\n");
        return;
    }
    else
    {
      for(int i=front;i<=rear;i++)
      {
          printf("%d ",queue[i]);
      }      
    }
}

int main()
{
    int choice;

    printf("\nQUEUE IMPLEMENTATION\n");
    
       
   do
    {
        printf("\n\n1.Insert\n2.Delete\n3.Peek\n4.Display\n5.Exit\nEnter your choice :");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 :
            insert();
            break;
        case 2:
            delete();
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


