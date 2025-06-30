import java.util.Scanner;

class TwoSum
{
    public static void main(String [] args)
    {
        int n=5;
        Scanner sc = new Scanner(System.in);

        boolean check = false;
        int array[] = new int[n];
        

        for(int i=0;i<n;i++)
        {
            array[i] = sc.nextInt();
        }
        

        int target= sc.nextInt();

        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(array[i]+array[j] == target)
        //         {
        //             System.out.println("Yes");
        //             check = true;
        //             break;
        //         }
        //     }
        //     if(check) break;
            
        // }

        //method 2
        boolean check2 = false;

        int i=0,j=n-1;
        while(i!=j)
        {
            if(array[i] + array[j] == target )
            {
                check2 = true;
                break;
            }
            else if(array[i] + array[j] > target )
                j--;
            else i++;
        }

        if(check2)  System.out.println("Yes");
        else  System.out.println("No");
    }
    //to change commit discription
}