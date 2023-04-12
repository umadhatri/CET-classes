#include <stdio.h>
int fib(int i);
int main()
{
    int i, n, x;
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        x = fib(i);
        printf("%d ", x);
    }
    return 0;
}
int fib(int i)
{
    if(i==0||i==1)
        return i;
    else
        return(fib(i-1)+fib(i-2));
}