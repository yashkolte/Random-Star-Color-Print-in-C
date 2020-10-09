#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // printf("%d", number);

    for (int x = 0; x <= 10; x++)
    {
        int number;
        srand(time(0));
        number = rand() % 10;
        
        for (int y = 0; y < number; y++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}