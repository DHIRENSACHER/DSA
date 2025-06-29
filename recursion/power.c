#include<stdio.h>

int power(int x,int y)
{
    if(y==1)
        return x;
    return x * power(x,y-1);
}

int powe(int x, int y, int ans)
{
    if(y==1)
        return x*ans;
    return powe(x,y-1,ans*x);
}


int main()
{
    if(1) printf("%d", power(4,3));
    else printf("%d", powe(4,3,1)); 

    return 0;
}