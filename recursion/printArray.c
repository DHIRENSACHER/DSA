#include<stdio.h>

void printArrTailed(int arr[], int n, int a)
{
    if(a == n)
    {
        return;
    }
    printf("%d ", arr[a]);
    printArrTailed(arr,n,a+1);
}


void printArrNonTailed(int arr[],int n,int a)
{   
    if(a==0)
    {
        printf("%d ",arr[a]);
        return;
    }
    
    printArrNonTailed(arr,n,a-1);
    printf("%d ",arr[a]);
    
}


void revPrintArrTailed(int arr[],int n, int a)
{
    if(a == n)
    {
        return;
    }
    printf("%d ", arr[n-1-a]);
    revPrintArrTailed(arr,n,a+1);
}


void revPrintArrNonTailed(int arr[],int n, int a)
{
    if(a==n)
    {
        return;
    }


    revPrintArrNonTailed(arr,5,a+1);
    printf("%d ", arr[a]);
}

int main()
{
    int arr[] = {1,2,3,4,5};

    printf("Tailed :- \n");
    printArrTailed(arr,5,0);
printf("\n");
    revPrintArrTailed(arr,5,0);


    printf("\nNon Tailed :- \n");
    printArrNonTailed(arr,5,4);
printf("\n");
    revPrintArrNonTailed(arr,5,0);

    return 0;
}


