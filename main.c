#include <stdio.h>
#include <stdlib.h>

int main()
{
    double F, X1, X2, delta; //Оголошення змінних
    unsigned int N, method;

    printf("Enter method 1 or 2:");
    scanf("%d", &method);

    while(method!= 1 && method!= 2) // Валідація
        {
        printf("ERROR! Wrong method. Enter method again (1 or 2) ");
        scanf("%d", &method);
    }
if(method == 1) //Метод 1
    {
        printf("\n\rEnter X1:");
        scanf("%lf", &X1);
        printf("\n\rEnter X2:");
        scanf("%lf", &X2);
        printf("\n\rSelect N:");
        scanf("%lu", &N);

        while(N < 1)  //Валідація
        {
           printf("ERROR! Enter N > 0 \n");
           printf("\nEnter N:");
           scanf("%u", &N);
        }

        printf("\n************************************************");
        printf("\n*  N  *         X         *        F(X)        *");
        printf("\n************************************************");

        int i=1; //Переменна
        delta=(X2-X1)/(N-1);
        for(i;i<=N;i++)
        {
            F = (8 * pow(X1/16 - 4, 3) - 4 * X1 - 12); //Функція
            printf("\n|%5d|%16.2f|%13.2f|\n",i,X1,F);
            printf("\n|************************************|");
            X1 += delta; // X1 == X1 + delta
            if(i%10 == 0)
            {
                printf("\nPress any key to continue...");
                getch();

            }
        }
    }
if(method == 2) //Метод 2
    {
        printf("\nEnter X1:");
        scanf("%lf", &X1);
        printf("\nEnter X2:");
        scanf("%lf", &X2);
        printf("\nEnter delta:");
        scanf("%lf", &delta);
        int i = 1;

        while(delta < 1.0 && delta > (X2-X1) )  //Валідація
        {
           printf("ERROR! Enter delta > 0 \n");
           printf("\nEnter delta:");
           scanf("%u", &delta);
        }

        printf("\n************************************************");
        printf("\n*  N  *         X         *        F(X)        *");
        printf("\n************************************************");
        for (int i=1; X1 <= X2; i++)
            {
            F = (8 * pow(X1/16 - 4, 3) - 4 * X1 - 12);
            printf("\n|%5d|%16.2f|%13.2f|\n",i,X1,F);
            printf("\n|************************************|");
            X1 += delta; // X1 == X1 + delta
           }
        if(i%10 == 0)
        {
            printf("\nPress any key to continue...");
            getch();
        }
}
return 0;
}
