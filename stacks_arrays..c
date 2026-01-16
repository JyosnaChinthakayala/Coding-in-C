#include <stdio.h>
#include<stdlib.h>
#define MAX 20
void push(int);
void display();
int pop();
int a[MAX];
int top = -1;

int main()
{
    int opt, data;
    while(1)
    {
        printf("\n1.push, 2.pop, 3.display, 4.exit\n");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1: printf("enter the element (you want to push)\n");
                    scanf("%d", &data);
                    push(data);
                    break;
            case 2: printf("the popped element is %d\n", pop());
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("wrong choice\n");
        }
    }
}

void push(int x)
{
    if(top == MAX - 1)
    {
        printf("stack overflow\n");
        return;
    }
    a[++top] = x;
}

int pop()
{
    if(top == -1)
    {
        printf("stack underflow\n");
        return -1;
    }
    return a[top--];
}

void display()
{
    int i;
    if(top == -1)
    {
        printf("stack is empty\n");
        return;
    }
    printf("stack elements:\n");
    for(i = 0; i <= top; i++)
        printf("%d ", a[i]);
    printf("\n");
}