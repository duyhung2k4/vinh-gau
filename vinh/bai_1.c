#include <stdio.h>

int main() {
    int n, i, x;
    float tong = 0;
    int dem = 0;

    printf("Nhap so phan tu cua day: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &x);

        if (x % 2 != 0) {
            tong += x;
            dem++;
        }
    }

    if (dem == 0) {
        printf("Khong co so le nao trong day.\n");
    } else {
        printf("Trung binh cong cua cac so le trong day la: %.2f\n", tong / dem);
    }
}
