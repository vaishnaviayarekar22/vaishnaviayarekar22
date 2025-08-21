#include<stdio.h>
#define size 5
int queue[size];
int rare;
int front;

int enqueue(int item)
{
if(rare==size)
   printf("OVERFLOW");
else if(rare==0)
   rare=1;
else
   rare=rare+1;
   queue[rare]=item;
   return 0;
}
int dequeue(int item)
{
if(front==0)
{
   printf("\n UNDERFLOW");
}
   item=queue[front];
if(front==rare)
{
   rare=0;
   front=0;
}
else
{
   front=front+1;
   return 0;
}
}
int traversal()
{
  for(int i =front;i>=rare;i++)
	printf("%d",queue[i]);
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
   printf("\n Enter your choice :");
   scanf("%d",&choice);
switch(choice)
{
  case 1:
	  printf("Enter the element to enqueue :");
	  scanf("%d",&item);
	  enqueue(item);
  	  break;
  case 2:
	  dequeue(item);
	  break;

  case 3:
	traversal();
        break;
  case 4:
	printf("Exiting the program");
	break;
   default:
	 printf("Invallid chioce");
}
}
while(choice!=4);
}
