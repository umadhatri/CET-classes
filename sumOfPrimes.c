#include <stdio.h>
int checkPrime(int n);
int main()
{
    int i, n, count=0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for(i=2; i<=n/2; ++i)
    {
        if(checkPrime(i)==1)
        {
            if(checkPrime(n-i)==1)
            {
                printf("%d = %d + %d\n", n, i, n-i);
                count = 1;
            }
        }
    }
    if(count==0)
    printf("%d cannot be expressed as a sum of 2 primes!", n);
    return 0;
}

int checkPrime(int n)
{
    int i, prime=1;
    if(n==0||n==1)
        prime = 0;
    else
    {
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
            {
                prime = 0;
                break;
            }
        }
    }
    return prime;
}