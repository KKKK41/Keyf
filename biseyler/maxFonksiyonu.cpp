#include <stdio.h>

int max(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int x, y;

    // Kullanýcýdan giriþ al
    printf("2 tamsayi giriniz: ");
    scanf("%d %d", &x, &y);

    // En büyük sayýyý yazdýr
    printf("En buyuk sayi: %d\n", max(x, y));

    return 0;
}
