#include<stdio.h>

int main()
{
    float kg, m, BMI;
    printf("Enter your 身高(m)");
    scanf("%f",&m);
    printf("Enter your 體重(kg)");
    scanf("%f",&kg);
    BMI=kg/(m*m);
    while(kg>=0&&m>=0)
    {
        printf("Your BMI is:%lf\n",BMI);
        if(BMI<18.5)
        {
            printf("體重過輕\n");
        }
        else if(BMI>=18.5&&BMI<24)
        {
            printf("體重正常\n");
        }
        else if(BMI>=24&&BMI<27)
        {
            printf("體重過重\n");
        }
        else if(BMI>=27&&BMI<30)
        {
            printf("體重輕度肥胖\n");
        }
        else if(BMI>=30&&BMI<35)
        {
            printf("體重中度肥胖\n");
        }
        else if(BMI>=35)
        {
            printf("體重重度肥胖\n");
        }
        printf("Enter your 身高(m)");
        scanf("%lf",&m);
        printf("Enter your 體重(kg)");
        scanf("%lf",&kg);
    }
    return 0;
}
