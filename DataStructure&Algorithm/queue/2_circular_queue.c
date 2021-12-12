#include<stdio.h>
#include<stdlib.h>

#define max 10
int front=-1,rear=-1;
int queue[max];

void insert()
{
    int item;
    if(rear==-1&&front==-1)
    {
        front=0;
        rear=0;
        queue[rear]=item;
    }
    else if((rear+1)%max==front)
    {
        printf("queue over flow\n");       
    }
    else
    {
        if (front==-1)
        front=0;                   
        printf("enter the element :");
        scanf("%d",&item);
        rear=(rear+1)%max;
        queue[rear]=item;            
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
       if(front==rear)
       front=rear=-1;
       else
       front=(front+1)%max;    
    }
}

void display()
{
    int i=front;
    if(front==-1||front>rear)
    {
        printf("the queue is empty\n");
        return;
    }
    else
    {
        printf("the elements are :\n");
     while(i<=rear)  
        {  
            printf("%d ",queue[i]);  
            i=(i+1)%max;  
        }     
    }
}

int main()
{
    int choice;

    printf("\nQUEUE IMPLEMENTATION\n");
    
       
   do
    {
        printf("\n\n1.Insert\n2.Delete\n3.Display\n4.Exit\nEnter your choice :");
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
            display();
            break;
        case 4:
            break;                
        default:
            printf("Wrong choice\n");
            break;
        }
    } while (choice!=5);
    return 0; 
    
}


