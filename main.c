#include <stdio.h>
#include <stdlib.h>
#define Name "Yevhenii"
#define LastName "Starosta"
#define GroupName "RE-21"
#define Faculty "RTF"
#define University "Igor Sikorsky Kyiv Polytechnic Institute"
int main()
{
    unsigned int semestr;
    float admissionScore;
    int Grade1;
    int Grade2;
    int Grade3;
    int Grade4;
    int Grade5;
    double averageGrade;
    unsigned int age;
    printf("%s %s Enter following data.\n", Name, LastName);
    printf("Enter semestr:");
    scanf("%u", &semestr);
    printf("Enter your admission score:");
    scanf("%f", &admissionScore);
    printf("Enter Grade #1:");
    scanf("%d", &Grade1);
    printf("Enter Grade #2:");
    scanf("%d", &Grade2);
    printf("Enter Grade #3:");
    scanf("%d", &Grade3);
    printf("Enter Grade #4:");
    scanf("%d", &Grade4);
    printf("Enter Grade #5:");
    scanf("%d", &Grade5);
    printf("Enter your age:");
    scanf("%u", &age);

    averageGrade = (double)(Grade1 + Grade2 + Grade3 + Grade4 + Grade5)/3;

    system("cls");
    printf("\n***************");
    printf("\n===============");
    printf("\n%s", University);
    printf("\n%s", Faculty);
    printf("\n%s", GroupName);
    printf("\n---------------------------");
    printf("\nstudent: %s %s", Name, LastName );
    printf("\nage: %u", age);
    printf("\nsemestr: %u", semestr);
    printf("\n---------------------------");
    printf("\nadmission score: %.1f", admissionScore);
    printf("\naverage grade = %.2lf", averageGrade);
    printf("\n");
    return 0;
}
