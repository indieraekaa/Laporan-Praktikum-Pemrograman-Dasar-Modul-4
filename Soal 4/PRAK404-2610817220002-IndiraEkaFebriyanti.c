#include <stdio.h>

int main(){
    int pilihan;
    float nilai1, nilai2, hasil;

    do{
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator INDIRA\n");
        }
        else if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilai1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilai2);

            if (pilihan == 1) {
                hasil = nilai1 + nilai2;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
            }
            else if (pilihan == 2) {
                hasil = nilai1 - nilai2;
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
            }
            else if (pilihan == 3) {
                hasil = nilai1 * nilai2;
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
            }
            else if (pilihan == 4) {
                hasil = nilai1 / nilai2;
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
            }
        }
        else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
        printf("\n");

    } while (pilihan != 5);

    return 0;
}