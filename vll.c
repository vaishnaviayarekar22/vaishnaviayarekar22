#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *nxt;
} *st;

int insert_at_start() {
    struct node *t;
    int num;

    t = (struct node*)malloc(sizeof(struct node));
    if (t == NULL) {
        printf("Overflow\n");
        return 0;
    }

    printf("Enter the number: ");
    scanf("%d", &num);

    t->data = num;
    t->nxt = st;
    st = t;
    return 1;

}
int insert_at_end()
{
    struct node *t,*temp;
    int num;
    t=(struct node*)malloc(sizeof(struct node));


    if(t==NULL)
    {
        printf("OVERFLOW ");
        return 0;
    }

    printf("Enter the number :");
    scanf("%d",&num);

    t->data=num;
    t->nxt=NULL;
    if(st==NULL)
    {
        st=t;
    }
    else
    {
      temp=st;
      while(temp->nxt!=NULL)
    {
          temp=temp->nxt;
    }
      temp->nxt=t;
      t->nxt=NULL;

    }
    return 0;

}

int delete_at_start()
{
    struct node *t;
if(st==NULL)
    {
        printf("UNDRFLOW");
        return 0;
    }
else
    t=st;
    printf("%d",t->data);
    st=st->nxt;
    free(t);
    return 1;
}
int delete_at_end()
{
struct node *t,*temp,*p;
if(st==NULL)
{
    printf("UNDERFLOW");
    return 0;
}
if(st->nxt==NULL)
{
    t=st;
    printf("%d",t->data);
    st=st->nxt;
    free(t);
    return 1;
}
  temp=st;
while(temp->nxt!=NULL)
{   temp=p;
    temp=temp->nxt;
}


    printf("%d",t->data);
    p->nxt=NULL;
    free(temp);
       return 1;

}
void traversal()
{
    struct node *t;

    if (st==NULL)
{
        printf("No linked list exists\n");
        return;
}

    t = st;

    while (t != NULL)
        {
        printf("%d", t->data);
        t = t->nxt;
        }

}


int main() {
    int choice;
    do {
        printf("\n 1. Insert at start");
        printf("\n 2. Insert at End");
        printf("\n 3. Insert at Given Position");
        printf("\n 4. Delete at start");
        printf("\n 5. Delete at End");
        printf("\n 6. Delete at given location");
        printf("\n 7. DISPLAY");
        printf("\n 8. Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insert_at_start();
                break;
            case 2:
                insert_at_end();
                break;
            case 4:
                delete_at_start();
                break;
            case 5:
                delete_at_end();
                break;
            case 7:
                traversal();
                break;
            case 8:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice \n");
        }
    } while (choice != 8);

    return 1;
}
