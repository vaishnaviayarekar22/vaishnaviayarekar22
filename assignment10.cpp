#include<iostream>
#include<string>
#define max 5
using namespce std;
template<typename T>
class Mystack
{
private:
  T  new data[max];
  int top;
public:
  Mystack
  {
  top=-1;
  }
bool isEmpty()
{
if(top == -1)
{
  return true;
}
else
  return false;
 
}
bool isFull()
{ 
if(top==max)
{
  return true;
}
else
  return false;
}
void push(T item)
{
 top=top+1;
 data[top]=item;
 return item;
 cout<<"Pushed"<<item<<"Successfully"<<endl;
}
T pop()
{
 item=data[top];
 top=top-1;
 cout<<"Poped"<<item<<"Successfully"<<endl;
}
};
int main()
{
int choice,stack; 
Mystack<string>ss;
Mystack<int>s;

do
{
  cout<<"1.Push"<<endl;
  cout<<"2.Pop"<<endl;
  cout<<"3.Exit"<<endl;
  
switch(choice)
{
case 1:
  int x;
  cout<<"Enter which stack you want(1 for string and 2 for int ) :"<<endl;
  cin>>stack;
  cout<<"Enter the item to insert :"<<endl;
  cin>>x;
  if(stack=1)
  {
  ss.push(x);
  }
  else
  s.push(x);
  break;
case 2:
   if(stack==1)
   {
   s.pop();
   }
   else
   ss.pop()
   break;
case 3:
  cout<<"Exit "<<endl;
default:
  cout<<"Invallid choice :"<<endl;
}
}
while(choice!=3);
return 0;  
}
