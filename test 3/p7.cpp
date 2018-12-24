#include <stdio.h>

int getprime(int prime[], int n)
{
    int valid[1000];
    int total = 0;
    int i, j;
    for(i=0; i<1000; i++)
    {
        valid[i]=1;
    }
    for(i=2; i<1000; i++)
    {
        if(valid[i])
        {
            if(n/i < i)
                break;
            for(j = i*i; j<1000; j+=i)
                valid[j] = 0;
        }
    }
    for(i=2; i<1000; i++)
    {
        if(valid[i])
            prime[++total]=i;
    }
    return total;
}

int main(void)
{

    int a, b;
    int Prime[1000] = {};
    int total = getprime(Prime, 1000);

    while(1)
    {
        scanf("%d %d", &a, &b);
        for(int i=0; i<1000; i++)
        {
            if(Prime[i] > b)
                break;
            if(a < Prime[i])
                printf("%d ", Prime[i]);
        }
        printf("\n");
    }
}
