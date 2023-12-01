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
        while (j <= satirSayisi - i) {
            printf(" ");
            j++;
        }

        // Sayýlarý yazdýr
        int k = i;
        int l = 1;
        while (l <= i) {
            printf("%d", k);
            k--;
            l++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
/*output
  1
 21
321
*/
