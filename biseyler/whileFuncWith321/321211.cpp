#include <stdio.h>

int main() {
    int satirSayisi;

    // Kullan�c�dan sat�r say�s�n� iste
    printf("Desi�iniz sat�r say�s�n� girin: ");
    scanf("%d", &satirSayisi);

    // Deseni olu�tur
    int i = 1;
    while (i <= satirSayisi) {
        int k = satirSayisi;
        int j = 1;

        while (j <= i) {
            printf("%d", k);
            k--;
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
/*
3
32
321
*/
