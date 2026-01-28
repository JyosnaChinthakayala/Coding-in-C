#include<stdio.h>
#include<stdlib.h>
#define MAX 20
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node *temp=NULL;
int count=0;
void enqueue(int);
int dequeue();
void display();
int main()
{
    int x,opt;
    while(1)
    {
    printf("Enter \n1 for enqueue\n2 for dequeue\n3 for display\n4 for exit\n");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:printf("Enter the element to be inserted into the queue\n");
               scanf("%d",&x);
               enqueue(x);
               break;
        case 2:printf("%d is the element which is deleted\n",dequeue());
               break;
        case 3:display();
               break;
        case 4:exit(0);              
    }
    }
}
void enqueue(int data)
{
    if(count==MAX)
    {
        printf("Overflow condition\n");
    }
    else
    {
        struct node *newnode=NULL;
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=NULL;
        if(front==NULL)
        {
            front=rear=newnode;
        }
        else 
        {
            rear->next=newnode;
            rear=newnode;
        }
        count++;
    }
}
int dequeue()
{
    int x;
    if(front==NULL)
    {
        printf("Underflow condition\n");
        return -1;
    }
    else
    {
        x=front->data;
        temp=front;
        front=front->next;
        temp->next=NULL;
        free(temp);
        count--;
        if(count==0)
        {
            front=rear=NULL;
        }
     return x;   
    }
}
void display()
{
    if(count==0)
    {
        printf("the queue is empty\n");
    }
    else
    {
        for(temp=front;temp!=NULL;temp=temp->next)
            printf("%d\t",temp->data);
        printf("\n");
    }
}