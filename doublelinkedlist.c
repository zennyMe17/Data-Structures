#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct node{
    int data;
    struct node *prev, *next;
};

struct node *head=0, *newnode, *temp, *tail;

void create()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the element = ");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    if (head == 0)
    {
        head=temp=tail=newnode;
    }
    else
    {
        newnode->prev=temp;
        temp->next=newnode;
        temp=tail=newnode;
    }
    
}

void display()
{
    temp=head;
    while (temp != 0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void insert_at_beginning()
{
   newnode=(struct node *)malloc(sizeof(struct node));
   printf("Enter the number = ");
   scanf("%d",&newnode->data);
   newnode->prev=0;
   newnode->next=head;
   head=newnode;
}

void insert_at_ending()
{
   newnode=(struct node *)malloc(sizeof(struct node));
   printf("Enter the number = ");
   scanf("%d",&newnode->data);
   newnode->next=0;
   newnode->prev=tail;
   tail->next=newnode;
   tail=newnode;
}

void insert_at_pos()
{
    int i=1,pos;
    temp=head;
    printf("Enter the position to be inserted = ");
    scanf("%d",&pos);
   if (pos == 1)
   {
       insert_at_beginning();
   }
   else
   {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the number = ");
        scanf("%d",&newnode->data);
        while(i<pos-1)
   {
       temp=temp->next;
       i++;
   }
   newnode->prev=temp;
   newnode->next=temp->next;
   temp->next=newnode;
   temp->next->prev=newnode;
   temp=newnode;
   }
}
void main()
{
    int ch;
    while(1){
    printf("Enter the choice\n1. To create\n2. To display\n3. To insert at beginning\n4. To insert at ending\n5. To insert at any value\n6. To exit\n");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        {
            create();
            break;
        }
        case 2:
        {
            display();
            break;
        }
        case 3:
        {
            insert_at_beginning();
            break;
        }
        case 4:
        {
            insert_at_ending();
            break;
        }
        case 5:
        {
            insert_at_pos();
            break;
        }
        case 6:
        {
            exit(0);
            break;
        }
    }
    }
}
