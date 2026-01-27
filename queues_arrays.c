#include<stdio.h>
#include<stdlib.h>
#define MAX 20
void enqueue(int);
int dequeue();
void display();
int a[MAX],front=-1,rear=-1;
int main()
{
    int opt,x;
    while(1)
    {
        printf("Choose \n1 for enqueue\n2 for dequeue\n3 for display\n4 to terminate \n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:printf("Enter the element to insert\n");
                   scanf("%d",&x);
                   enqueue(x);
                   break;
            case 2:printf("The deleted element is %d\n",dequeue());
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
            default:printf("wrong choice\n");
        }
    }
    return 0;
}
void enqueue(int data)
{
    if(rear==MAX-1)
    printf("Condition overflow\n");
    else
    {
        if(front==-1)
        front=0;
        a[++rear]=data;
    }
}
int dequeue()
{
    if(front==-1||front>rear)
    {
        printf("Condition underflow \n");
        return -1;
    }
    else
    {
     return a[front++];
    }
}
void display()
{
    int i;
    if(front==-1||front>rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for(i=front;i<=rear;i++)
        printf("%d\t",a[i]);
        printf("\n");
    }
}