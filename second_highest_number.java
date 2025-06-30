import java.util.Scanner;

class second_highest_number
{
    public static void sortArray(int array[])
    {
        for(int i=0;i<array.length;i++)
        {
            for(int j=i+1;j<array.length;j++)
            {
                if(array[i]<array[j])
                {
                    int temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;
                }
            }
        }
    }

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

        
        sortArray(array);
        System.out.println("2nd highest number is : " + array[1]);
        
        

    }
}
//comment