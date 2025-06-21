import java.util.Scanner;

public class second_highest_number_method2 
{
    public static int maxInArray(int []array)
    {
        int max = array[0];
        for(int i=1;i<array.length;i++)
        {
            if(array[i]>max)
            {
                max = array[i];
            }
        }

        
        return max;
    }

    public static void removeElement(int array[], int n)
    {
        int i;
        for(i=0;i<array.length;i++)
        {
            if(array[i] == n)
            {
                for(int j=i;j<array.length-1;j++)
                {
                    array[j] = array[j+1];
                }
                array[array.length-1] = Integer.MIN_VALUE;
                break;
            }
        }

    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        

        int n = sc.nextInt();

        int array[] = new int[n];

        System.out.print("Enter "+n+" numbers : ");
        for(int i=0;i<n;i++)
        {
            array[i] = sc.nextInt();
        }

        
        int firstMax = maxInArray(array);
        removeElement(array,firstMax);
        System.out.println("Second maximum number is : " + maxInArray(array));
    
    }    
}
