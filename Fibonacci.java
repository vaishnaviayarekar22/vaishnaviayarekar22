import java.util.Scanner;
class Fibonacci
{
public static void main(String[] args)
{
Scanner sc= new Scanner(System.in);
System.out.println("Enter the  roll number :");
int roll_no=sc.nextInt();
int a=0;
int b=1;
int c;
while(a<=roll_no)
{
System.out.print(a + " ");
c=a+b;
a=b;
b=c;
}
System.out.println("Fibbonacci series :");
}

}
