import java.util.Scanner;
class Avg
{
public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter the number 1 :");
int n1=sc.nextInt();

System.out.println("Enter the number 2:");
int n2=sc.nextInt();

System.out.println("Enter the number 3 :");
int n3=sc.nextInt();

int avg=(n1+n2+n3)/3;
System.out.println("The avg of numbers is "+avg);
}
}


