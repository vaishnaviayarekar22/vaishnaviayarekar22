#include<iostream>
using namespace std;

class Distance
{
private :
  int feet,inch;
public :

 Distance(int f,int i)
   {
    feet=f;
    inch=i;
   }
void normal()
 {
     if(inch>=12)
     {
     feet=(feet+(inch/12));
     inch=inch%12;
     }
     
}


Distance operator+(Distance d)
{
  Distance t;
 t.feet=feet+d.feet;
 t.inch=inch+d.inch;
 t.normal();
 return t;

}

friend ostream& operator <<(ostream &out ,Distance d);


friend istream& operator >>(istream &in ,Distance d);
};

ostream& operator<<(ostream &out ,Distance d)
{ 
 cout<<d.feet<<"'"<<d.inch<<'"';
 return out;
}
istream& operator>>(istream &in ,Distance d)
{  
 cout<<"Enter the feet :";
 cin>>d.feet;
 cout<<"Enter the inch :";
 cin>>d.inch;
 d.normal();
 return in;

}
int main()
{
 Distance  d1,d2,d3;
 
 
	 cout<<"Enter the distance :"<<endl;
	 cin>>d1;
	 cout<<"Enter the distance :"<<endl;
	 cin>>d2;
	 
	 d3=d1+d2;
	 cout<<"The distance is :"<<d3;
}
