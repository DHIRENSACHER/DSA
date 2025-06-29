#include<stdio.h>

int sum(int arr[], int length,int ans)
{
    if(length == 0)
        return ans;

    ans += arr[length-1];
    return sum(arr,--length,ans);
}



int main()
{
    int arr[] = {100,5000,9000,10000,0,-100};
    printf("Sum = %d",sum(arr,6,0));
}