#include <stdio.h>
#include <stdlib.h>

#define MAX 20

struct node {
    int data;
    struct node *next;
};

void push(int);
int pop();
void display();
struct node *top = NULL;
int count = 0;

void main()
 {
    int opt, data;
    while (1) {
        printf("\n Enter 1. push, 2. pop, 3. display, 4. exit\n");
        scanf("%d", &opt);
        switch (opt)
         {
            case 1: 
                printf("Enter the element you want to push\n");
                scanf("%d", &data);
                push(data);
                break;
            case 2: printf("the popped element is %d \n", pop());
                break;
            case 3: display();
                break;
            case 4: exit(0);
            default: printf("wrong choice\n");
            break;
         }
    }
}
void push(int i)
{
    if (count == MAX)
        printf("overflow\n");
    else
    {
        struct node *newnode = NULL;
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = i;
        newnode->next = top;
        top = newnode;
        count++;
    }
}
int pop()
{
    struct node *temp = NULL;
    if (top == NULL)
    printf("underflow\n");
    else
    {
        temp = top;
        top = top->next;
        temp->next=NULL;
        return temp->data;
        free(temp);
        count--;
    }
}
void display()
{
    struct node *temp=NULL;
    if(top==NULL)
    printf("the stack is empty\n");
    else
    {
     for(temp=top;temp!=NULL;temp=temp->next)
     printf("|%d|\n",temp->data);
    }
}