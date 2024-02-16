#include <stdio.h>
#include <stdlib.h>

#define N 5

int queue[N];
int front=-1;
int rear=-1; 

void enqueue()
{
    int x;
    if (rear == N-1)
    {
        printf("Queue is full\n");
    }
    else if (front==-1 && rear==-1)
    {
        printf("Enter the number to be inserted = ");
        scanf("%d",&x);
        front=rear=0;
        queue[rear]=x;
        printf("Element is inserted\n");
    }
    else
    {
     printf("Enter the number to be inserted = ");
     scanf("%d",&x);
     queue[++rear]=x;   
     printf("Element is inserted\n");
    }
}

void dequeue()
{
    if (front==-1 && rear==-1)
    {
        printf("Queue is Empty\n");
    }
    else if (front == rear)
    {
        printf("%d is deleted\n",queue[front]);
        front=rear=-1;
    }
    else 
    {
        printf("%d is deleted\n",queue[front++]);
    }
}
    
void display()
{
    int i;
    if (front==-1 && rear==-1)
    {
        printf("Queue is Empty\n");
    }
    else 
    {
        printf("Elements in Queue are = \n");
        for (i=front;i<rear+1;i++)
        {
            printf("%d\t",queue[i]);
        }
        printf("\n");
        
    }
}

void peep()
{
    printf("Element present in front is = %d",queue[front]);
    printf("\n");
}

int main() {
    int ch;

    while(1)
    {
    printf("******************\n");
    printf("Enter the option \n1. Insertion\n2. Deletion\n3. Display\n4. Peep\n");
    scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                    enqueue();
                    break;
        
            case 2:
                    dequeue();
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    peep();
                    break;
            case 5:
                    exit(0);
                    break;
        }
    }

    return 0;
}
