#include<stdio.h>

int fib(int n)
{
    if(n==0)
        return 0;
    else
    {
        if(n==1)
            return 1;
        else
        {
            return fib(n-1) + fib(n-2);
        }
    }
}

int main()
{
    printf("fib(3) = %d\n", fib(3));
    printf("fib(10) = %d\n", fib(10));
    printf("fib(30) = %d\n", fib(30));
}
