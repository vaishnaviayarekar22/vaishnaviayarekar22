import java.util.Scanner;
import java.util.Random;

class Guess 
{
public static void main(String[] args) 
{
Scanner sc = new Scanner(System.in);
Random ram_num = new Random();

int min = 1;
int max = 100;
int random = ram_num.nextInt(max - min + 1) + min;

int num;
int count=0;

System.out.println("Guess the number between 1 to 100");
do 
{
num = sc.nextInt();
count++;
if (num > random)
{
   System.out.println("Too High");
} 
else if (num < random) 
{
   System.out.println("Too Low");
}

}
while (num != random);

System.out.println("Congratulation You guessed the correct number between 1 to 100");
System.out.println("YOU guessed the number "+random+"in"+count+"guesses");
}
}

