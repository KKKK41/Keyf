#include <stdio.h>

int main() {
    int satirSayisi;

    // Kullan�c�dan sat�r say�s�n� iste
    printf("Desi�iniz sat�r say�s�n� girin: ");
    scanf("%d", &satirSayisi);

    // Deseni olu�tur
    int i = 1;
    while (i <= satirSayisi) {
        // Say�lar� yazd�r
        int k = 1;
        while (k <= i) {
            printf("%d", k);
            k++;
        }

        printf("\n");
        i++;
    }

    return 0;
}

/*output
1
12
123
*/
