#include<stdio.h>
#include<stdlib.h>
struct node{

	 int data;
	 struct node *add;
}*st;

int insert_at_start()
{
	struct node *t;

	int num;

	t=(struct node*)malloc(sizeof(struct node));
	printf("Enter the number");
	scanf("%d",&num);
	
	if(t==NULL)
	{  
	  printf("Overflow");
	  return 0;
	}
	else
	{ 
	  t->add=st;
	  st=t;
	}
}



	

int main()
{

 int choice;
do
{
  printf("1.Insert at start ");
  printf("2.Insert at End");
  printf("3.Insert at Given Position");
  printf("4.Insert at start ");
  printf("5.Delete at start ");
  printf("6.Delete at End ");
  printf("7.Delete at given location");
  printf("Enter your choice :");
  scanf("%d",&choice);
switch(choice)
{

case 1:
  insert_at_start();
  break;
}
}
while(choice !=7);
}

  
  
  
