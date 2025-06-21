#include<stdio.h>

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

void main()
{
    int n;
    scanf("%d", &n);

    int array[n];    
    
    printf("Enter %d numbers : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }

    sortArray(array,n);

    printf("2nd highest number is : " + array[1]);

}