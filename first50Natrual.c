#include <stdio.h>
int natural(int n);
int main()
{
    int n = 50;
    printf("The first 50 natural numbers are: \n");
    natural(n);
}

int natural (int n)
{
    if(n==1)
    printf("%d", n);
    else
    {
        printf("%d\n", n);
        return natural(n-1);
    }
}