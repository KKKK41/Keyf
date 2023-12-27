#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void makeCode(int myCode[4])
{
    int i;
    for (i = 0; i < 4; i++)
    {
        myCode[i] = 1 + rand() % 9 ; // 1 ile 9 arasýnda farklý rastgele sayýlar oluþtur
    }
}

void guess(int guessCode[4])
{
    printf("\nEnter your guess (use numbers 1-9, no duplicates):\n");
    int usedCode[9] = {0}; // 1-9 arasýndaki sayýlarýn kullanýlýp kullanýlmadýðýný kontrol etmek için dizi
    for (int i = 0; i < 4; i++)
    {
        do
        {
            scanf("%d", &guessCode[i]);
            if (guessCode[i] < 1 || guessCode[i] > 9 || usedCode[guessCode[i] - 1])
            {
                printf("Invalid input. Please enter a number between 1 and 9 without duplicates.\n");
            }
        } while (guessCode[i] < 1 || guessCode[i] > 9 || usedCode[guessCode[i] - 1]);
        usedCode[guessCode[i] - 1] = 1; // kullanýlan sayýyý iþaretle
    }
}

void checkCode(int myCode[4], int guessCode[4], int *black, int *white)
{
    int i, j;
    *black = *white = 0;

    for (i = 0; i < 4; i++)
        if (guessCode[i] == myCode[i])
        {
            ++*black;
        }

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            if (guessCode[i] == myCode[j] && i != j)
            {
                ++*white;
            }
}

void displayGuess(int guessCode[4], int black, int white)
{
    int i;
    printf("\nYour Guess\t\t\t\tYour Score\n");
    for (i = 0; i < 4; i++)
        printf("%d ", guessCode[i]);
    printf("\t\t");
    for (i = 0; i < black; i++)
        printf("black ");
    for (i = 0; i < white; i++)
        printf("white ");
    printf("\n\n");
}

int main()
{
    srand(time(NULL));
    int i, start = 1, black, white, wrongGuess;
    int myCode[4], guessCode[4];
    while (1)
    {
        printf("MASTERMIND Game! \nPress 1 to start game");
        scanf("%d", &start);
        if (start == 1)
        {
            makeCode(myCode);
            for (wrongGuess = 1; wrongGuess <= 8; wrongGuess++) // 8 tahmin hakký verir
            {
                guess(guessCode);
                checkCode(myCode, guessCode, &black, &white);
                displayGuess(guessCode, black, white);
                if (black == 4) // eðer oyuncu doðru tahmin ederse oyun biter
                {
                    printf("You Win!\n\n\n\n");
                    break;
                }
            }
            if (wrongGuess == 9) // eðer oyuncu 8 turda doðru renkleri tahmin edemezse, kaybeder
                printf("\nYou Lost!\nSecret Code: %d %d %d %d\n\n\n\n\n", myCode[0], myCode[1], myCode[2], myCode[3]);
        }
        else
            exit(1);
    }
    return 0;
}

