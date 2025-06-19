
import java.util.Scanner;

class fizz_buzz_problem 
{

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter value of n :");
        int n = sc.nextInt();

        for (int i = 1; i <= n; i++) 
        {
            if(i%4 == 0 && i%6 == 0)
                System.out.print("Buzzfizz ");
            else if(i%3 == 0 && i%5 == 0)
                System.out.print("Fizzbuzz ");
            else if(i%4 == 0 || i%6 == 0)
                System.out.print("buzz ");
            else if(i%3 == 0 || i%5 == 0)
                System.out.print("fizz ");
            else 
                System.out.print(i + " ");
            
        }
    }
}
