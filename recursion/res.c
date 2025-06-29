#include<stdio.h>

int ds(int n)
{
    if(n<=1)
    {
        return 1;
    }

    return 1 + ds(n/2);
}


int main()
{
    int res = ds(16);
    printf("%d",res);
}