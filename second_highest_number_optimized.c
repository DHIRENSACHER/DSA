#include<stdio.h>
#include<limits.h>

void sortArray(int array[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[j]>array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];    

    //input 
    printf("Enter %d numbers : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    

    
    //method 1
    //sortArray(array,n);
    //printf("2nd highest number is : " + array[1]);



//method 2
    //int firstMax = array[0];
    //int secondMax = array[1];

    //{10,34,22,12}
    //fm = 10; Sm = 34 

    //i=0
    //arr[i]>fm  false 
    //arr[i]>sm (false) so short circuit

    //i=1
    //arr[i]>fm  true
    //fm = 34 
    //arr[i]>sm (false) so short circuit

//eventually arr[i] will never be > sm 
//as second max is highest here 
//thus
    int firstMax = INT_MIN;
    int secondMax = INT_MIN;


    for(int i=0;i<n;i++)
    {
        if(array[i] > firstMax)
        {
            firstMax = array[i];
        }

        if(array[i]>secondMax && array[i]!=firstMax)
        {
            secondMax = array[i];
        }
    }

    printf("Second maximum number is : %d\n",secondMax);


    return 0;
}