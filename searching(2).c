#include<stdio.h>
int main()
{

    int n,item,loc=1;

    printf("Enter the size of array :");
    scanf("%d",&n);

    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        printf("Enter the array element :");
        scanf("%d",&a[i]);

    }


    printf("Enter the element to search");
    scanf("%d",&item);
    a[n+1]=item;

    while(a[loc]!=item)
    {
        loc=loc+1;
    }
    if(loc==n+1)
    {
        printf("The element not found");
    }
    else
    {
        printf("The element %d found at location %d",item,loc);
    }
}
