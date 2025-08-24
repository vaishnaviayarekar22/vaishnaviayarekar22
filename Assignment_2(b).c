#include<stdio.h>
#define size 5
int queue[size];
int rear;
int front;

int enqueue(int item)
{
if((front==1)&&(rear==size))
    printf("OVERFLOW");
else if(rear==0)
    rear=1;
    front=1;
if(rear==size)
    rear=1;
else
    rear=rear+1;
    queue[rear]=item;
    return 0;
}






int main()
{
    int choice,item;
do
{
    printf("\n 1.Enqueue");
    printf("\n 2.Dequeue");
    printf("\n 3.Traversal");
    printf("\n 4.Exit");
    printf("Enter your choice :");
    scanf("%d",&choice);
switch(choice)
{


case 1:
    printf("Enter item to enqueue ");
    scanf("%d",&item);
    enqueue(item);
    break;

}
}
while(choice!=4);
}
