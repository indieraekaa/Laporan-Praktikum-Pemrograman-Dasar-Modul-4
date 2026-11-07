#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int awal_a = a;
    int awal_b = b;
 
    if (a < b) {
        while (a <= awal_b && b >= awal_a){
            printf("%d %d", a, b);
            if (a < awal_b) {
                printf(" - ");
            }
            a++;
            b--;
        }
    }
    else {
        while (a >= awal_b && b <= awal_a){
            printf("%d %d", a, b);
            if (a > awal_b){
                printf(" - ");
            }
            a--;
            b++;
        }
    }
    return 0;
}
