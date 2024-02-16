#include<stdio.h>
#include<stdlib.h>
#define N 5

int call[N];
int rear=-1,front=-1;

void insert()
{
    if(rear == N-1)
    {
        printf("Sorry call queue is full\n");
    }
    else
    {
        int call_id;
        printf("Enter the call id = ");
        scanf("%d",&call_id);
        if (rear == -1)
        {
            rear = front = 0;
            call[rear]=call_id;
        }
        else
        {
            call[++rear] = call_id;
        }
    }
}

void display()
{
    int i=front;
    if (rear == -1)
        {
            printf("Call Queue is empty\n");
        }
     else
        {
            printf("Calls in the queue are =\t");
            while(i != rear+1)
            {
                printf("%d\t",call[i]);
                i++;
            }
            printf("\n");  
        }
    
}

void remove_call()
{
    printf("call id %d is removed\n",call[front++]);
    
}

void main()
{
    int ch;
    while(1)
{
    printf("enter the choice\n1. Insert a call\n2. Display a call\n3. Remove a call\n4. Exit\n");
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
            remove_call();
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
