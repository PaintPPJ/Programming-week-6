#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void printSinWave(int wave_height, int wave_length)
{
    if (wave_height > 1 && wave_length > 0 && wave_length < 16) {

        int left_space = 1, right_space = 2;

        // for loop for height of wave 
        for (int i = 1; i <= wave_height; i++) {

            // for loop for wave length 
            for (int j = 1; j <= wave_length; j++) {


                for (int k = 1; k <= right_space; k++) {
                    printf(" ");
                }
                printf("x");

                for (int k = 1; k <= left_space; k++)
                {
                    printf(" ");
                }
                printf("x");

                for (int k = 1; k <= right_space; k++)
                {
                    printf(" ");
                }
                printf(" ");
            }
            right_space = (i + 1 != wave_height);
            left_space = (i + 1 != wave_height) ? 3 : 5;
            printf("\n");
        }
    }
    else
    {
        printf("Error, can't print sine wave in console.");
    }
}
int main()
{
    int wave_height, wave_length;
    scanf("%d", &wave_height);
    scanf("%d", &wave_length);
    printSinWave(wave_height, wave_length);
    return 0;
}