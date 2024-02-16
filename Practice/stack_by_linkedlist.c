#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top=0, *temp, *newnode;

void push()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the number = ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if (top==0)
    {
        top=newnode;
    }
    else
    {
        newnode->next=top;
        top=newnode;
    }
}

void display()
{
    temp=top;
    while (temp != 0)
    {
        printf("|\t%d\t|\n",temp->data);
        temp=temp->next;
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("Enter choice = ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                display();
                break;
            }
            case 3:
            {
                exit(0);
                break;
            }
        }
    }
}