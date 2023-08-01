#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head,*newnode,*temp;
int count,pos,i;
void traverse()
{
	head=0;
	int choice=1;
	while(choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter Data\n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("Do you want to continue(0,1)\n");
		scanf("%d",&choice);
	}
}
void display()
{
	count=0;
	temp=head;
	printf("the elements in the linked list is:\n");
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
		count++;
	}
	printf("the no of elements in linked list is %d\n",count);
}
void search(int item)
{
	int index=0;
	temp=head;
	while(temp!=0)
	{
		if(temp->data==item)
		{
			printf("Item found at position:%d\n",index+1);
		}
		temp=temp->next;
		index++;
	}
}
void insertatbeg()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter Data\n");
	scanf("%d",&newnode->data);
	if(head==0)
	{
		newnode->next=0;	
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
}
void insertafterpos()
{
	printf("Enter the position:\n");
	scanf("%d",&pos);
	if(pos>count)
	{
		printf("Invalid position");
	}
	else
	{
		temp=head;
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter Data\n");
		scanf("%d",&newnode->data);
		newnode->next=temp->next;
		temp->next=newnode;
	}
}
void insertafterdata(int element)
{
	temp=head;
	while(temp->next!=0 && temp->data!=element)
	{
		temp=temp->next;
	}
	if(temp->data==element)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter Data\n");
		scanf("%d",&newnode->data);
		newnode->next=temp->next;
		temp->next=newnode;
	}
	else
	{
		printf("Element is not found\n");
	}
}
int main()
{
	int ch,item,ch1,element;
	do
	{
		printf("LINKED LIST OPERATIONS\n");
       	printf("1:Traverse\t2:Display\t3:Search\t4:Insert\t5:Exit\n");
        printf("Enter the Choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				traverse();
				break;
			case 2:
				display();
				break;
			case 3:
				printf("Enter element to search: ");
    			scanf("%d", &item);
				search(item);
				break;
			case 4:
				printf("1:Insert at beggining\t2:Insert after at a given position\t3:Insert after a given node location\n");
        		printf("Enter the Choice:\n");
				scanf("%d",&ch1);
				switch(ch1)
				{
					case 1:
						insertatbeg();
						break;
					case 2:
						insertafterpos();
						break;
					case 3:
						printf("Enter the element to insert after data\n");
						scanf("%d",&element);
						insertafterdata(element);
						break;
				}
				break;
			case 5:
				printf("EXIT\n");
				break;	
			default:
				printf("Invalid Choice\n");
				break;
		}	
	}while(ch!=5);
}
