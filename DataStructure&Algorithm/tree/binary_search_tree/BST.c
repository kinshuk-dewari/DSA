#include<stdio.h>
typedef struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
}BST;
int insert(BST *head,int num)		// to insert the elements in the binary search tree
{
	BST *p;
	if(head==NULL)
	{
		p=(BST*)malloc(1*sizeof(BST));
		p->data=num;
		head=p;		
	}
	else
	{
		if(head->data>num)
		head->left=insert(head->left,num);
		else
		head->right=insert(head->right.num);
	}
	return head;		
}
void display(BST *head)		// to display the content of the binary search tree
{
	if (head==NULL)
	{
		return;
	}
	display(head->left);
	printf("%d",head->data);
	display(head->right);
}

void delete(BST *head,int k)
{
	if(head==k)
		return head;
	if(k<head->k)
		head->left=delete(head->left,k);
	else if(k>head->k)
		head->right=delete(head->right,k);
	else if(head->right==NULL)
		BST *temp=head->right;
		free(head);
		return temp;
	else if(head->left==NULL)
		BST *temp=head->left;
		free(head);
		return temp;
	// delete to be continued
		
}
int main()
{
	BST *head=NULL;
	int ch,k; 
	
	// menu driven for the different options of the binnary tree
		
	do
	{
	scanf("Choose from the following choice\n1.Insert\n2.Display\n3.Delete\n4.Exit";)
	switch(ch);
	{
		case 1:
			printf("Enter the element :");
			scanf("%d",&n);
			insert(head,n);
			break;
		case 2:
			display(head);
			break;
		case 3:
			printf("\nEnter the element to delete :");
			scanf("%d",&k)
			delete(head,k);
			break;
		case 4:
			break;
		default:
			printf("Wrong choice,please choose a valid choice\n");
			break;
	}
	}while(ch!=4);
	
	return 0;	
}
