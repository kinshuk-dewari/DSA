#include<stdio.h>                      //Stack operations using DMA
#include<stdlib.h>

#define MAX 20

void PUSH(int *a,int *top)
{
	if(*top==MAX-1 )
	{
		printf("Stack is full\n");     //stack overflow
	}
	else
	{
		(*top)++;
		printf("Enter the element:");
		scanf("%d",&a[*top]);
	}
}

void POP(int *a,int *top)
{
    if(*top==-1)
	{
		printf("Stack is empty\n");   //stack underflow
	}
	else
	{
		printf("The deleted element is : %d ",a[*top]);
		(*top)--;
	}
}

void PEEK(int *a,int *top)
{
	if(*top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Top most element of stack is :");
		printf("%d",a[*top]);
	}
}

void DISPLAY(int *a, int *top)
{   if(*top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{   
    printf("Elements of stack are:\n");
		for(int j=*top;j>-1;j--)
		{  
       printf("%d  ",a[j]);
		}
	}
}
int main()
{
	int choice,top=-1;
	int *ptr=NULL;
	ptr=(int *)malloc(MAX*sizeof(int));       //dynamic memory allocation of the array
	do
	{ 
    printf("\n\n1-PUSH\n2-POP\n3-PEEK\n4-DISPLAY\n5-EXIT\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{ 
        case 1:
			  	PUSH(ptr,&top);
			  	break;
		  	case 2:
			  	POP(ptr,&top);
			  	break;
		  	case 3:
			  	PEEK(ptr,&top);
			  	break;
		  	case 4:
			  	DISPLAY(ptr,&top);
			  	break;
		  	case 5:
			  	break;
		    default:
			    	printf("You entered the wrong choice:\n");
		}
	}while(choice!=5);
	free(ptr);
	return 0;
}
