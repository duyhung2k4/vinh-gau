#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n, x;
    int arr[MAX_SIZE];
    int count = 0;
    int i;
    long long S = 1000;

    printf("Nhap so phan tu cua day: ");
    scanf("%d", &n);

    printf("Nhap day so nguyen: \n");
    for (i = 0; i < n; ++i) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Day so vua nhap: ");
    for (i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);

    for (i = 0; i < n; ++i) {
        if (arr[i] == x) {
            count++;
        }
    }

    printf("So lan xuat hien cua %d trong day la: %d\n", x, count);

    for (i = 0; i < n; ++i) {
        S -= (i + arr[i]) * (i + arr[i]);
    }

    printf("Gia tri cua bieu thuc S: %lld\n", S);

    return 0;
}
