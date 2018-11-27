#include<stdio.h>
#include<ctype.h>

int leap(int year)
{
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int month,day;
    int year;
    int days;
    int m[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    char cont = 'Y';

    while(cont=='Y')
    {
        days=0;
        printf("Enter year : ");
        scanf("%d", &year);
        printf("Enter month and day : ");
        scanf("%d %d", &month, &day);

        for(int i=0; i<month-1; i++)
        {
            days=days+m[i];
        }
        printf("%d days passed since 1/1/%d\n", days+day+leap(year), year);

        printf("Continue (Y/N)? ");
        getchar();
        cont=toupper(getchar());
    }
}
