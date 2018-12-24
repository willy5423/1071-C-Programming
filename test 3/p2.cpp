#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i, num;
	int count_0 = 0;
	int count_1 = 0;
    
    srand(time(NULL));

    printf("Randomly generating 100 bit data\n");
    for(i=0; i<100; i++)
    {
        num = rand()%2;
        printf("%d ", num);
        if(num == 0)
            count_0++;
        else
            count_1++;

        if((i+1)%10 == 0)
            printf("\n");
    }
    printf("Number(0) = %d\n", count_0);
    printf("Number(1) = %d\n", count_1);
    printf("Prob(0) = %.2f\n", ((float)count_0)/100);
    printf("Prob(1) = %.2f\n", ((float)count_1)/100);
    return 0;
}
