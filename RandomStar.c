#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("#--------------------------------- Random Number Start Printer In C -----------------------------------#\n\n");
    int line, visu;
    printf("\tEnter The Number of Lines ... (Recommendtion :- Try bigger Number) \n");
    scanf("%d", &line);
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
        printf("\n");
    }
    return 0;
}