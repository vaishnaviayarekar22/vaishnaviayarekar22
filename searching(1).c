#include<stdio.h>
int main()
{
    int n,i,item,loc=0,k=1;

    printf("Enter the number of elements in the array :");
    scanf("%d",&n);


    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element in the array :");
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search :");
    scanf("%d",&item);

    while(loc==0&&k<=n)
    {
        if(item==a[k-1])
        {
        loc=k;
        }
        k=k+1;
     }

    if(loc==0)
    {
        printf("The item is  not found");
    }
    else
    {
        printf("The element %d found at location %d and array index %d",item,loc,i);
    }
}
