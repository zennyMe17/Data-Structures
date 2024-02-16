#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct node
{
    char data[50];
    struct node *next;
};

struct node *head=0, *newnode, *temp, *prev;

void insert()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the name = ");
    scanf("%s",newnode->data);
    newnode->next=0;
    
    if (head == 0 || strcmp(newnode->data,head->data) < 0)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        temp=head;
        while ( temp->next != 0 && strcmp( newnode->data , (temp->next->data) ) > 0)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

void display()
{
    
    if (head == 0)
    {
        printf("Linked list is empty\n");
    }
    else 
    {
        temp=head;
        printf("The students are = ");
        while (temp != 0)
        {
            printf("%s\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void delete()
{
    char value[50];
    temp=head;
    printf("Enter the name to be deleted = ");
    scanf("%s",value);
    while (temp != 0)
    {
        if (strcmp(temp->data,value) == 0)
        {
            if (temp == head)
            {
                head=head->next;
                free(temp);
            }
            prev->next=temp->next;
            free (temp);
            return;
        }
        prev=temp;
        temp=temp->next;
    }
}

void main()
{
    int ch;
    while (1)
    {
        printf("Enter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                insert();
                break;
            }
            case 2:
            {
                display();
                break;
            }
            case 3:
            {
                delete();
                break;
            }
            case 4:
            {
                exit(0);
                break;
            }
        }
    }
}