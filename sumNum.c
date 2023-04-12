#include <stdio.h>
int sumNum(int n);
int main()
{
    int i, sum;
    printf("Enter a number greater than 0: ");
    scanf("%d", &i);
    sum = sumNum(i);
    printf("The sum of numbers from 1 to %d is %d", i, sum);
}
int sumNum(int i)
{
    if(i==0)
    return 0;
    else
    {
        return (i+sumNum(i-1));
    }
}