#include<stdio.h>

int main()
{
    int n = 0;
    printf("Enter value of n : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        if(i%4 == 0 && i%6==0)
            printf("Buzzfizz ");
        else if (i%3 == 0 && i%5==0)
            printf("Fizzbuzz ");
        else if (i%4 == 0 || i%6==0)
            printf("buzz ");
        else if (i%3 == 0 || i%5==0)
            printf("fizz ");
        else printf("%d ",i);

    }

}