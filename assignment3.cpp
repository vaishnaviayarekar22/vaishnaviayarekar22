#include<iostream>
using namespace std;

float area(float radius)
{  
  float area;
  area =3.14*radius*radius;
  return area;
}
float area(int length,int  breadth)
{
   float area;
   area=length*breadth;
   return area;
}
float area(float base,float height)
{
  float area;
  area=0.5*base*height;
  return area;
}
float volume(float l,float b=1,float h=1)
{ 
  float volume;
  volume=l*b*h;
  return volume;
}



int main()
{
  float radius,base,height,l,b,h;
  int length,breadth;
  
	cout<<"Enter the radius for circle :";
	cin>>radius; 
	cout<<"Area of circle="<<area(radius)<<endl;
	
	cout<<"Enter the length :"<<endl;
	cin>>length;
	cout<<"Enter the breadth :"<<endl;
	cin>>breadth;
	cout<<"The area of rectagle is ="<<area(length,breadth)<<endl;
	
	cout<<"Enter the base :"<<endl;
	cin>>base;
	cout<<"Enter the height :"<<endl;
	cin>>height;
	cout<<"The are triangle :"<<area(base,height)<<endl;
	
	
	cout<<"Enter length of box :"<<endl;
	cin>>l;
	cout<<"Enter breadth of box :"<<endl;
	cin>>b;
	cout<<"Enter the height of box :"<<endl;
	cin>>h;
	cout<<"The volume of box is :"<<volume(l)<<endl;
	cout<<"The volume of box is :"<<volume(l,b)<<endl;
	cout<<"The volume of box is :"<<volume(l,b,h)<<endl;
	
}


