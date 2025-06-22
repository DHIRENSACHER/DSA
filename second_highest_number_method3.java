import java.util.ArrayList;
import java.util.Scanner;

public class second_highest_number_method3 
{

    public static int maxInArray(ArrayList<Integer> array)
    {
        int max = array.get(0);
        for(int i=1;i<array.size();i++)
        {
            if(array.get(i)>max)
            {
                max = array.get(i);
            }
        }
        return max;
    }
    
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        

        System.out.print("Enter n : ");
        int n = sc.nextInt();

        ArrayList<Integer> array = new ArrayList<Integer>();


        for(int i=0;i<n;i++)
        {
            int number = sc.nextInt();
            array.add(number);
        }

        array.remove(Integer.valueOf(maxInArray(array)));

        System.out.println("Second highest Integer is : " + maxInArray(array));

    }
}
