#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void makeCode(int myCode[4])
{
    int i;
    for (i = 0; i < 4; i++)
    {
        myCode[i] = 1 + rand() % 9 ; // 1 ile 9 aras�nda farkl� rastgele say�lar olu�tur
    }
}

void guess(int guessCode[4])
{
    printf("\nEnter your guess (use numbers 1-9, no duplicates):\n");
    int usedCode[9] = {0}; // 1-9 aras�ndaki say�lar�n kullan�l�p kullan�lmad���n� kontrol etmek i�in dizi
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
        usedCode[guessCode[i] - 1] = 1; // kullan�lan say�y� i�aretle
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
            for (wrongGuess = 1; wrongGuess <= 8; wrongGuess++) // 8 tahmin hakk� verir
            {
                guess(guessCode);
                checkCode(myCode, guessCode, &black, &white);
                displayGuess(guessCode, black, white);
                if (black == 4) // e�er oyuncu do�ru tahmin ederse oyun biter
                {
                    printf("You Win!\n\n\n\n");
                    break;
                }
            }
            if (wrongGuess == 9) // e�er oyuncu 8 turda do�ru renkleri tahmin edemezse, kaybeder
                printf("\nYou Lost!\nSecret Code: %d %d %d %d\n\n\n\n\n", myCode[0], myCode[1], myCode[2], myCode[3]);
        }
        else
            exit(1);
    }
    return 0;
}

