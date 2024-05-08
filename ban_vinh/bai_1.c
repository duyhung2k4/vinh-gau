#include <stdio.h>

int main() {
    int n, i, a;
    float F = 2005;

    printf("Nhap so phan tu cua day: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &a);

        F += (float)(a + 2 * i + 1) / (2 * i + 7);
    }

    printf("Gia tri cua bieu thuc F la: %.2f\n", F);

    return 0;
}
