#include<stdio.h>
#include<limits.h>

// int maximum(int arr[],int n)
// {
//     if(n==1)
//         return arr[n-1];//arr[0]


//     int max = maximum(arr,n-1);
//     if(max > arr[n-1])
//     {
//         return max;
//     }
//     return arr[n-1];
// }

int highest(int arr[], int n, int max)
{
    if(n==1)
        return max;
    
    if(max > arr[n-1])
    {
        return highest(arr,n-1,max);
    }
    max = arr[n-1];
    return highest(arr,n-1,max);
}

//sir ka method 

// int highestSir(int a[], int n, int i, int max)
// {
//     if(i==n-1)
//     {
//         if(max > a[i])
//             return max;
//         else return a[i];
//     }

//     if(max > a[i])
//         highestSir(a,n,i+1,max);
//     else 
//         highestSir(a,n,i+1,a[i]);
// }





int main()
{
    int n = 5;
    int arr[] = {2,3,8,1,4,9,7,3};

    printf("max is %d",highest(arr,8,INT_MIN));


    return 0;
}