#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert();
void delat();
int count=0;
struct node
{
    int data;
    struct node *next;
};
struct node *newnode=NULL;
struct node *head=NULL;
struct node *last=NULL;
struct node *temp=NULL;
int main()
{
    int opt;
    while(1)
    {
        printf("enter\n 1.create,2.insert,3.display\n,4.delete,5.find,6.sort\n,7.replace,8.reverse,9.exit\n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:create();
            break;
            case 2:insert();
            break;
            case 3:display();
            break;
            case 4:delat();
            break;
           /* case 5:find();
            break;
            case 6:sort();
            break;
            case 7:replace();
            break;
            case 8:reverse();
            break;*/
            case 9:exit(0);
            break;
            default:printf("You entered wrong option");
        }
    }
    return 0;
}
void create()
{
    int x;
    printf("enter the element to be created\n");
    scanf("%d",&x);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    if(head==NULL)
    {
        head=last=newnode;
        last->next=NULL;
    }
    else 
    {
        last->next=newnode;
        last=newnode;
        last->next=NULL;
    }
    count++;
}
void display()
{
    if(head==NULL)
    {
        printf("the list is empty\n");
    }
    else
    {
    for(temp=head;temp->next!=NULL;temp=temp->next)
    printf("%d->",temp->data);
    printf("%d\n",temp->data);
    }
}
void insert()
{
    int x,pos,i;
    printf("enter the element to be inserted\n");
    scanf("%d",&x);
    printf("enter the position of the element to be inserted\n");
    scanf("%d",&pos);
    if(pos<1||pos>count+1)
    printf("cannot insert in this position\n");
    else
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=x;
        if(head==NULL)
        {
            head=last=newnode;
            last->next=NULL;
        }
        else if(pos==1)
        {
            newnode->next=head;
            head=newnode;
        }
        else if(pos==count+1)
        {
            last->next=newnode;
            last=newnode;
            last->next=NULL;
        }
        else
        {
            temp=head;
            for(i=1;i<pos-1;i++)
            temp=temp->next;
            newnode->next=temp->next;
            temp->next=newnode;
        }
        count++;
    }
}
void delat() 
{
    int pos, i;
    struct node *temp1 = NULL;
    if(head == NULL) {
        printf("The list is empty, no element to delete.\n");
        return;
    }
    printf("Enter the position of the element to be deleted (1 to %d): ", count);
    scanf("%d", &pos);
    if(pos < 1 || pos > count) {
        printf("Invalid position to delete.\n");
        return;
    }

    if(count == 1) {
        free(head);
        head = last = NULL;
    } else if(pos == 1) {
        temp = head;
        head = head->next;
        free(temp);
    } else {
        temp1 = head;
        for(i = 1; i < pos - 1; i++) {
            temp1 = temp1->next;
        }
        temp = temp1->next;
        temp1->next = temp->next;
        if(pos == count) {
            last = temp1;
        }
        free(temp);
    }
    count--;
}


