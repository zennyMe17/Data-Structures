#include<stdio.h>
#include<stdlib.h>

void Prime_Check(int x)
{
    int i=2,flag=0;
    for (i;i<x;i++)
    {
        if ((x%i) == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0 || x == 2)
    {
        printf("It is Prime number");
    }
    else
    {
        printf("It is not Prime number");
    }
}

void main()
{
    int x;
    printf("Enter the number to be check for prime number = ");
    scanf("%d",&x);
    Prime_Check(x);
}