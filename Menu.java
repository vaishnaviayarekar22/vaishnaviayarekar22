import java.util.Scanner;
class Menu
{
public static void main(String[] args)
{
Scanner sc= new Scanner(System.in);
int choice;
do
{
System.out.println("1.Check even or odd :");
System.out.println("2.Multiplication Tablle ");
System.out.println("3.Prime or not");
System.out.println("4.Perfect Number or not ");
System.out.println("5.Exit");
System.out.println("Enter your choice =");
choice=sc.nextInt();
switch(choice)
{
 case 1:
 	System.out.println("Enter the number to check even or odd :");
 	int num=sc.nextInt();
 	if(num%2==0)
 	  {
 	    System.out.println("The number is Even ");
 	  }
 	 else
 	  {
 	   System.out.println("The number is odd ");
 	  }
 	  break;
 case 2:
     	System.out.println("Enetr the number to get multiplication table :");
     	int n=sc.nextInt();
	for(int i=1;i<=10;i++)
	 {
	 System.out.println(i*n);
	 }
	 break;
case 3:
   System.out.println("Enetr the number to check prime or not :");
   int number=sc.nextInt();
   int count=0;
   for(int i=1;i<=number;i++)
   {
   if(number%i==0)
   { 
   	count++;
   }
   }
   if(count==2)
   {
  	 System.out.println("The number is Prime ");
   }
   else
   {
   	System.out.println("The number is not Prime ");
   }
   break;
case 4:
   System.out.println("Enter the nuber :");
   int a=sc.nextInt();
   int sum=0;
   for(int i=1;i<=a/2;i++)
   {
   	if(a%i==0)
   	{
   	sum=sum+i;
   	}
   }
   if(sum!=a)
   {
   System.out.println("The number is  Not Perfect Numebr");
   }
   else
   {
   System.out.println("The numeber is Perfect Number :");
   }
   break;
   
case 5:
   System.out.println("Exiting the program");
   break;

default :
    System.out.println("You entered the wrong Choice ");
    break;
}
} 
while(choice!=5); 

}
}
