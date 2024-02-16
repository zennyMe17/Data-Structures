#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=0,*newnode,*temp;
int count=0;

void create()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    if (head == 0)
    {
        head=temp=newnode;
        printf("Enter the number = ");
        scanf("%d",&newnode->data);
        newnode->next=0;
    }
    else
    {
        temp->next=newnode;
        printf("Enter the number = ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        temp=newnode;
    }
}

void display()
{
    temp=head;
    printf("The Elements are = ");
    while (temp != 0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n");
}

void insert()
{
    int pos,i=1;
    printf("Enter the position to be inserted = ");
    scanf("%d",&pos);
    if (pos>count)
    {
        printf("Element cannot be inserted at this position\n");
    }
    else
    {
        temp=head;
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the element to be inserted = ");
        scanf("%d",&newnode->data);
        while (i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

void in_at_beginning()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the element to be inserted = ");
    scanf("%d",&newnode->data);
    newnode->next=head->next;
    head=newnode;
}

void main()
{
    int ch;
    while(1)
    {
        printf("Enter the choice \n1. To create a new node\n2. To display node\n3. To insert any value\n4. To insert at Beginning\n5. To Exit =\n ");
        scanf("%d",&ch);
        switch(ch)
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
                insert();
                break;
            }
            case 4:
            {
                in_at_beginning();
                break;
            }
            case 5:
            {
                exit(0);
                break;
            }
        }
    }
}
