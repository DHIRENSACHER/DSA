#include <stdio.h>

int factorial(int n)
{
    if(n==1) return 1;
    return n * factorial(n-1);
}

int fact(int n, int ans)
{
    if(n==0)
        return ans;
    return fact(n-1,ans*n);
}



int main()
{
    int n = 10;
    if(0)
        printf("%d\n",factorial(n));
    else 
        printf("%d",fact(n,1));

    return 0;
}