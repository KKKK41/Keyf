#include <stdio.h>

int main() {
    int satirSayisi;

    // Kullanýcýdan satýr sayýsýný iste
    printf("Desiðiniz satýr sayýsýný girin: ");
    scanf("%d", &satirSayisi);

    // Deseni oluþtur
    int i = 1;
    while (i <= satirSayisi) {
        // Sayýlarý yazdýr
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
