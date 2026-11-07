#include <stdio.h>

int main() {
    int n, kelipatan;
    scanf("%d %d", &n, &kelipatan);

    int total_keseluruhan = 0;

    for (int i = 1; i <= n; i++) {
        int jumlah_baris = 0;

        for (int j = i; j >= 1; j--) {
            int kali = j * kelipatan;
            jumlah_baris += kali;

            printf("(%d * %d)", j, kelipatan);
            if (j > 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", jumlah_baris);
        total_keseluruhan += jumlah_baris;
    }
    printf("%d\n", total_keseluruhan);

    return 0;
}