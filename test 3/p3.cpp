#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

struct Grade
{
    int studID;
    char *name;
    int midterm;
    int final;
    float termGrade;
};

void add(struct Grade grades[], int i)
{
    char *names[] = {"Abel Chen", "Ben Lin",
                     "Benny Pan", "John Hsu", "Jack Jian",
                     "Tony Chung", "Hanry Xiao", "Jason Wang",
                     "Jonson Wu", "Larry Tsai"
                    };

    grades[i].studID = rand()%1000+402310000;
    grades[i].name = names[rand()%10];
    grades[i].midterm = rand()%50+51;
    grades[i].final = rand()%50+51;
}

void computeTermGrade(struct Grade grades[], int count)
{
    int i;

    for(i=0; i<count; i++)
    {
        grades[i].termGrade = ((float)grades[i].midterm+
                               (float)grades[i].final)*0.5;
    }
}

void showGrades(struct Grade grades[], int count)
{
    int i;

    for(i=0; i<count; i++)
    {
        printf("id: %d, Name: %s, midterm: %d, final: %d, term grade: %.1f\n",
               grades[i].studID, grades[i].name, grades[i].midterm,
               grades[i].final, grades[i].termGrade);
    }
}

int main()
{
    srand(time(NULL));
    int count = 0;
    struct Grade grades[MAX];
    int N;
    
    printf("Enter N: ");
    scanf("%d", &N);
    printf("Generating %d grades ...\n\n", N);
    for(int i=0; i<N; i++)
    {
        add(grades, i);
        count++;
    }
    computeTermGrade(grades,count);  // compute term grade
    showGrades(grades,count);
    
    return 0;
}
