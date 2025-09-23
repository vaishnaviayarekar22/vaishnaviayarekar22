#include<iostream>
using namespace std;


class Fraction
{
private :
	 int numorator;
	 int denominator;
public :
Fraction()
{
	numorator=1;
	denominator=1;
} 
Fraction(int n,int d)
{
	numorator=n;
	denominator=d;
}
Fraction add(Fraction f)
{
	 Fraction result;
	 
	 result.numorator=numorator*f.denominator+f.numorator*denominator;
	 result.denominator=denominator*f.denominator;
	 
	 return result;
}
Fraction subtract(Fraction f)
{  
	Fraction result;
	
	result.numorator = numorator*f.denominator-f.numorator*denominator;
	result.denominator=denominator*f.denominator;
	
	return result;
}
Fraction multiply(Fraction f)
{
	Fraction result;
	
	result.numorator=numorator*f.numorator;
	result.denominator=denominator*f.denominator;
	
	return result;
}
Fraction divide(Fraction f)
{
	Fraction result;
	
	result.numorator=numorator*f.denominator;
	result.denominator=denominator*f.numorator;
	
	return result;
}

void print()
{
 cout<<numorator<<'/'<<denominator<<endl;
}
};
int main()
{
 int n1,d1,n2,d2,choice;
        
        
        
 
	 cout<<"Enter the numorator and denominator for 1st fraction :"<<endl;
	 cin>>n1>>d1;
	 cout<<"Enter the numorator and denominator for 2nd fraction :"<<endl;
	 cin>>n2>>d2;
	 
	 Fraction f1(n1,d1);
         Fraction f2(n2,d2);
         
         cout<<"f1 = ";f1.print();
         cout<<"f2 = ";f2.print();
         
         
	 
	cout<<"1.Add"<<endl;
        cout<<"2.Subtract"<<endl;
        cout<<"3.Multiply"<<endl;
        cout<<"4.Division"<<endl;
        cout<<"Enter your choice :"<<endl;
        cin>>choice;
        
	 Fraction result;
	 
switch(choice)
{
       case 1:
       result=f1.add(f2);
       cout<<"Sum = ";
       break;
       
       case 2:
       result=f1.subtract(f2);
       cout<<"Difference= ";
       break;
       
       case 3:
       result=f1.multiply(f2);
       cout<<"Multiplication = ";
       break;
       
       case 4:
       result=f1.divide(f2);
       cout<<"Divisoin = ";
       break;
       
}
result.print();
 return 0;
 
 
}


	
	
