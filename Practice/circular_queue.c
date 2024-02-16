#include <stdio.h>
#include <stdlib.h>
#define N 5

int c_queue[N];
int front=-1,rear=-1;

void insert()
{
    if ( (rear+1)%N == front)
    {
        printf("Circular Queue is full\n");
    }
    else
    {
        int x;
        printf("Enter the element = ");
        scanf("%d",&x);
        if (rear == -1)
        {
            front=rear=0;
            c_queue[rear]=x;
        }
        else
        {
            rear=(rear+1)%N;
            c_queue[rear]=x;
        }
    }
}

void display()
{
    if (rear == -1)
        {
            printf("Circular Queue is Empty\n");
        }   
        else
        {
            int i=front;
            printf("The elements present in the queue are = ");
            while (i != rear)
            {
                printf("%d\t",c_queue[i]);
                i=(i+1)%N;
            }
            printf("%d\t",c_queue[i]);
            printf("\n");
        }
}

void del()
{
    printf("%d is deleted\n",c_queue[front]);
    front=(front+1)%N;
}

void main()
{
    int ch;
    while(1)
    {
        printf("Enter the choice\n1. To insert a element\n2. To display a element\n3. To delete a element\n4. To exit\n");
        scanf("%d",&ch);
        switch (ch)
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
                del();   
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