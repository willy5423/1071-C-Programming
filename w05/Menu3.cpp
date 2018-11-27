#include<stdio.h>

int IsLeap(int year)
{
    if((year%4==0 &&!(year%100==0))||year%400==0)
    {
        printf("Year %d is a leap year\n", year);
    }
    else
    {
        printf("Year %d is not a leap year\n", year);
    }
    printf("\n");

}

int Timeconvert(int hh, int mm, int ss, int seconds)
{
    seconds=(hh*3600)+(mm*60)+ss;
    printf("%02d:%02d:%02d = %d seconds\n", hh, mm, ss, seconds);
    printf("\n");
}

int main()
{
    int choice;
    int year;
    int hh;
    int mm;
    int ss;
    int seconds;

    while(1)
    {
        printf("Main Menu\n");
        printf("1. Leap\n");
        printf("2. Timeconvert\n");
        printf("3. Exit\n");
        printf("=>");
        scanf("%d", &choice);
        if(choice==3)break;
        switch(choice)
        {
        case 1:
            printf("Enter year:");
            scanf("%d",&year);
            IsLeap(year);
            break;
        case 2:
            printf("Enter hh:mm:ss ");
            scanf("%d:%d:%d", & hh, & mm, & ss);
            Timeconvert(hh,mm,ss,seconds);
            break;
        }
    }
}
