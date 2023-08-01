#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
char a[max][max];
int top = -1;
char x[max];
int isempty() ;
int isfull() ;
void push() ;
int pop() ;
void display() ;
int main()
{
    int ch;
    do
    {
    	printf("STACK OPERATIONS USING ARRAY\n");
       	printf("1.PUSH\t2.POP\t3.DISPLAY\t4.EXIT\n");
        printf("Enter the Choice:\n");
        scanf("%d",&ch);
        switch (ch) {
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
			printf("EXIT\n");
            break;
        default:
            printf("Invalid Choice");
            break;
        }
    }while(ch!=4);
    return 0;
}
int isfull(){
    if ((top == max-1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty(){
    if((top==-1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(){
    if (isfull())
    {
        printf("Stack is full");
    }
    else
    {
        printf("Enter element to add\n");
        scanf("%s",x);
        top++;
        strcpy(a[top],x);
    }
}
int pop(){
    if(isempty())
    {
        printf("Stack is empty");
        exit(0);
    }
    else{
        strcpy(x,a[top]);
        printf("The popped element is:\n");
        printf("%s\n",x);
        top--;
    }
}
void display()
{
    if(isempty())
    {
        printf("NO data to display\n");
        exit(0);
    }
    else
    {
        int i;
        printf("The elements in STACK\n");
        for(i=0;i<top+1;i++)
        {
            printf("%s\n",a[i]);
        }
        printf("Press Next Choice\n");
    }
}
