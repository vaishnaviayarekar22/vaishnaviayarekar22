import java.util.Scanner;

class Score 
{
public static void main(String[] args) 
{
Scanner sc = new Scanner(System.in);

System.out.println("Enter the percentage:");
float marks = sc.nextFloat();

if (marks >= 80 && marks <= 100) 
{
    System.out.println("Grade is A");
} 
else if (marks >= 65 && marks <= 79)
{
System.out.println("Grade is B");
} 
else if (marks >= 50 && marks <= 64) 
{
System.out.println("Grade is C");
} 
else if (marks >= 40 && marks <= 49) 
{
System.out.println("Grade is D");
} 
else if(marks<40)
{
System.out.println("Grade is F");
} 
else
{
System.out.println("Youn enter invalid percentage ");
}

}
}

 

