#include <stdio.h>

int main() {
    int i, j, n;
    for (i = 0; i < 12; i++) {
        for (j = 0; j <=11; j++) {
            if (i == j || j == (12 - i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
