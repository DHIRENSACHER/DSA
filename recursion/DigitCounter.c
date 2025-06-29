#include<stdio.h>

int countDigit(int n, int count)
{
    if(n==0)
        return count;

    return countDigit(n/10,++count);
}


int main()
{
    int n = 987;
    printf("%d\n",countDigit(n,0));
    return 0;
}