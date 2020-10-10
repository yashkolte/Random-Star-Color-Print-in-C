#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("\033[0;32m");
    printf("\n\n#--------------------------------- Random Number Start Printer In C -----------------------------------#\n\n");
    printf("\033[0;35m");
    int line, visu;
    printf("\t\tEnter The Number of Lines ... (Recommendtion :- Try bigger Number) \n");
    scanf("%d", &line);
    printf("\033[1;34m");
    printf("\n\tEnter The Number of Visualisation ... (Recommendtion :- Try bigger Number)\n");
    scanf("%d", &visu);
    printf("\n");

    srand(time(NULL));

    for (int x = 1; x <= line; x++)
    {
        int number;
        number = rand() % visu;

        for (int y = 0; y < number; y++)
        {
            printf("*");
        }
        printf("\033[0;3%dm", rand() % 7 +1 );
        printf("\n");
    }
    return 0;
}