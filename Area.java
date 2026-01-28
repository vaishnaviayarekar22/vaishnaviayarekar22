import java.util.Scanner;
class Area
{
public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);

System.out.println("Enter the length :");
int length=sc.nextInt();

System.out.println("Enter the bredth :");
int bredth=sc.nextInt();

System.out.println("Enter the roll :");
int roll_no=sc.nextInt();

length=length*roll_no;
bredth=bredth*roll_no;

int area=length*bredth;

System.out.println("The area is"+area+"square meters");
}
}


