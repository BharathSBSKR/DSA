#include<stdio.h> 
int queue[100];
int front=-1;
int rear=-1;
int N;
void enque(int val)
{
	if(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear]=val;
	}
	else if((rear+1)%N==front)
	{
		printf("QUEUE is over flow\n");
	}
	else
	{
		rear=(rear+1)%N;
		queue[rear]=val;
	}
}
void deque()
{
	if(front==-1 && rear==-1)
	{
		printf("QUEUE is under flow\n");
	}
	else if(front==rear)
	{
		printf("The dequeued element is %d\n",queue[front]);
		front=rear=-1;
	}
	else
	{
		printf("The dequeued element is %d\n",queue[front]);
		front=(front+1)%N;
	}
}
void display()
{
	int i=front;
	if(front==-1 && rear==-1)
	{
		printf("The QUEUE is Empty\n");
	}
	else 
	{
		printf("The elements in QUEUE\n");
		while(i!=rear)
		{
			printf("%d\n",queue[i]);
			i=(i+1)%N;
		}
		printf("%d\n",queue[rear]);
	}
}
int main()
{
	int val,choice;
    printf("Enter the size of QUEUE[MAX=100]:\n");
    scanf("%d",&N);
    printf("QUEUE OPERATIONS USING ARRAY\n");
    printf("1.ENQUE\n2.DEQUE\n3.DISPLAY\n4.EXIT\n");
    do
    {
        printf("Enter the Choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
            	printf("Enter the Element\n");
    			scanf("%d",&val);
                enque(val);
                break;
            }
            case 2:
            {
                deque();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("EXIT\n");
                break;
            }
            default:
            {
                printf("\n\tPlease Enter a Valid Choice(1/2/3/4)");
            }      
        }
    }
    while(choice!=4);
    return 0;
}
