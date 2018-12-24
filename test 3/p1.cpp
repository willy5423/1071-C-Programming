#include <stdio.h>

int main()
{
    int i, j;
    
    printf("  | ");
    
    for(i=1; i<=9; i++)
        printf("%2d ", i);
        
    printf("\n");
    printf("--|----------------------------\n");

    for(i=1; i<=9; i++)
    {
        printf("%d | ", i);
        for(j=1; j<=9; j++)
        {
            printf("%2d ", i*j);
        }
        printf("\n");
    }
    printf("--|----------------------------\n");
    return 0;
}
