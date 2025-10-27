#include<stdio.h>
int main()
{
 int n,data[n],beg,mid,end,item,loc;
 
	 beg = data[0];
	 end=data[n];
	 mid=(beg+end)/2;
	 
printf("Enter the size of the array :");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
  printf("Enter the elemet in array :");
  scanf("%d",&data[i]);
  
}

printf("Enter the element to search :");
scanf("%d",&item);

while(beg<=end && data[mid]!=item)
{
  if(item<data[mid])
  {
   end=mid-1;
  }
  else 
  {
   beg=mid+1;
  }
  mid=(beg+end)/2;
}
if(data[mid]==item)
{ 
 loc=mid;
 printf("The location is %d",loc);
}
else
{
 
 printf("ITEM NOT FOUND");
}
 

}
