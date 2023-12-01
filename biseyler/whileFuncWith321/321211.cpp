#include <stdio.h>

int main() {
    int satirSayisi;

    // Kullanýcýdan satýr sayýsýný iste
    printf("Desiðiniz satýr sayýsýný girin: ");
    scanf("%d", &satirSayisi);

    // Deseni oluþtur
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
