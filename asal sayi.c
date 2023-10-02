

#include <stdlib.h>
#include <stdio.h>

int asal_mi(int sayi) {
    int i;

    if (sayi <= 1) {
        return 0; // 1 ve negatif sayýlar asal deðil
    }

    for (i = 2; i * i <= sayi; i++) {
        if (sayi % i == 0) {
            return 0; // Asal deðil
        }
    }

    return 1; // Asal
}

int main() {
    int n;

    printf("Bir sayi giriniz: ");
    scanf("%d", &n);

    if (asal_mi(n) == 0) {
        printf("Girdiginiz sayi asal degildir.\n");
    } else {
        printf("Girdiginiz sayi asaldir.\n");
    }

    return 0;
}

