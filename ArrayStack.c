#include<stdio.h>
#define size 10
int arr[size];
int top1=-1,i;
int top2=size;
void push1(int x)
{
    if(top1<top2-1)
    {
      top1++;
      arr[top1]=x;
    }
    else{
        printf("\nStack 1 is overflow by an element %d\n",x);
    }
}
void push2(int x)
{
    if(top1<top2-1)
    {
        top2--;
        arr[top2]=x;
    }
    else{
        printf("\nStack 2 is overflow by an element %d\n",x);
    }
}
void pop1()
{
    if(top1>=0){
        printf("Popped Element in Stack 1 is %d\n",arr[top1]);
        top1--;
    }
    else{
        printf("Stack is Empty\n");
    }
}
void pop2()
{
    if(top2<size){
        printf("Popped Element in Stack 2 is %d\n",arr[top2]);
        top2++;
    }
    else{
        printf("Stack is Empty\n");
    }
}
void display_Stack_1()
{
    printf("Displaying elements in stack 1\n");
    for(i=top1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}
void display_Stack_2()
{
    printf("Displaying elements in stack 2\n");
    for(i=top2;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}

int main()
{
    int n;
    int val;
    printf("1.Store in Stack 1\n2.Store in Stack 2\n3.Pop the element in stack 1\n4.Pop the element in stack 2\n5.EXIT\n");
    do
    {
        printf("Entry the Option\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            printf("Enter the element\n");
            scanf("%d",&val);
            push1(val);
            break;
            case 2:
            printf("Enter the element\n");
            scanf("%d",&val);
            push2(val);
            break;
            case 3:
            pop1();
            break;
            case 4:
            pop2();
            break;
            case 5:
            printf("EXIT\n");
            break;
            default:
            {
                printf("\n\tPlease Enter a Valid Choice(1/2/3/4/5)");
            }
        }
    }while(n!=5);
    display_Stack_1();
    display_Stack_2();
}
