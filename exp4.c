#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int top=-1,s[10];
void push();
void pop();
void display();
int peek();
int count();
int main()
{
    int choice;
    while(1)
    {
        printf("\n perform operations on the stack:");
        printf("\n 1.push \n 2.pop\n 3.display\n 4.peek\n 5.count\n6.end ");
        printf("\n\n\enter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                peek();
                break;
            }
            case 5:
            {
                printf("stack count is :%d \n",count());
            }
            case 6:
            {
                exit(0);
            }
            {
                default:
                printf("\n invalid choice!!");
            }
        }
    }
}
void push()
{
    int x;
    if (top == SIZE - 1)
    {
        printf("\n overflow!!");
    }
    else
    {
        printf("\n enter the element to added onto the stack:");
        scanf("%d",&x);
        top=top+1;
        s[top]=x;
    }
}
void pop()
{
    if (top==-1)
    {
        printf("\n underflow!!");
    }
    else
    {
        printf("\n popped element: ",s[top]);
        top=top-1;
    }
}
void display()
{
    if (top==-1)
    {
        printf("\n underflow!!");
    }
    else
    {
        printf("\n elements present in the stack:\n");
        for(int i=top;i>=0;--i)
        printf("%d\n",s[i]);
    }
}
int peek()
{
    if (top==-1)
    {
        printf("stack is empty\n ");
        return -1;
    }
    else
    {
        printf("top element :%d\n",s[top]);
        return s[top];
    }
}
int count()
{
    return top+1;
}
