#include <stdio.h>

int main() {
    int satirSayisi;

    // Kullanýcýdan satýr sayýsýný iste
    printf("Desiðiniz satýr sayýsýný girin: ");
    scanf("%d", &satirSayisi);

    // Deseni oluþtur
    int i = 1;
    while (i <= satirSayisi) {
        // Boþluklarý yazdýr
        int j = 1;
        while (j < i) {
            printf(" ");
            j++;
        }

        // Sayýlarý yazdýr
        int k = satirSayisi;
        while (k >= i) {
            printf("%d", k);
            k--;
        }

        printf("\n");
        i++;
    }

    return 0;
}
/*output
321
 32
  3
*/
