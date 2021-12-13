#include<stdio.h>
#include<stdlib.h>

#define size 10

int front=-1,rear=0;
int queue[size];

int isFull()            // to check of the queue is full
{
    if((front==0 && rear==size-1)||front==rear+1)
    return 1;
    else
    return 0;
}
int  isEmpty()         // to check is the queue is empty
{
    if (front==-1)
    return 1;
    else
    return 0;
}
void insert_front()        // to insert from the front end
{
    fflush(stdin);
    int data;
    if(isFull())
    {
        printf("the queue is full.\n");
        return;
    }
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
    }
    else 
        { 
           if (front==0)
           front=size-1; 
           else
           front=front-1;
        }
    printf("enter  the element :");
    scanf("%d",&data);
    queue[front]=data;
 }

void insert_rear()          // to insert from the rear end
{
    fflush(stdin);
    int data;
    if(isFull())
    {
        printf("the queue is full.\n");
        return;
    }
    if(front==-1 && rear==-1)
    {
        rear=0;
        front=0;
    }
    else 
        { 
      
             if(rear==size-1)
             rear=0;
             else
             rear=rear+1;
      
        }
    printf("enter  the element :");
    scanf("%d",&data);
    queue[front]=data;
    printf("%d",rear);
}
void del_front()        // to delete from the front end
{
    fflush(stdin);
    if(isEmpty())
    {
        printf("the queue is empty.\n");
        return;
    }
    if(front==rear)         // to check if the queue has only one element
    {
        front=-1;
        rear=-1;
    }
    else if(front==size-1)      // for circular implementation
    front=0;
    else
    front++;
    
}
void del_rear()         // to delete from the rear end
{
    fflush(stdin);
    if(isEmpty())
    {
        printf("the queue is empty.\n");
        return;
    }
    if(front==rear)          // to check if the queue has only one element
    {
        front=-1;
        rear=-1;
    }
    else if (rear=0)        // for circular implementation
    rear=size-1;
    else
    rear--;
}
void display()
{
    fflush(stdin);
    int i=front;
    if(isEmpty())
    {
        printf("the queue is empty\n");
        return;
    }
    else
    {
        printf("the elements are :\n");
     while(i!=rear)  
        {  
            printf("%d ",queue[i]);  
            i=(i+1)%size;  
        }  
        printf("%d ",queue[rear]);     
    }
}
int main()
{   
    int choice;

    printf("\n DOUBLE ENDED QUEUE IMPLEMENTATION\n");
    
       
   do
    {
        fflush(stdin);
        printf("\n\n1.Insert Front\n2.Insert Rear\n3.Delete Front\n4.Delete Rear\n5.Print\n6.Exit\nEnter your choice :");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 :
            insert_front();
            break;
        case 2:
            insert_rear();
            break;
        case 3:
            del_front();
            break;
        case 4:
            del_rear();
            break;
        case 5:
            display();
            break;
        case 6:
            break;        
        default:
            printf("Wrong choice\n");
            break;
        }
    } while (choice!=6);
    return 0; 
}
