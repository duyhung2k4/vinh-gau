#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n, x;
    int arr[MAX_SIZE];
    int count = 0;
    int i;
    long long S = 1000;

    printf("Nhập số phần tử của dãy: ");
    scanf("%d", &n);

    printf("Nhập dãy số nguyên: \n");
    for (i = 0; i < n; ++i) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Dãy số vừa nhập: ");
    for (i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhập giá trị x cần tìm: ");
    scanf("%d", &x);

    for (i = 0; i < n; ++i) {
        if (arr[i] == x) {
            count++;
        }
    }

    printf("Số lần xuất hiện của %d trong dãy là: %d\n", x, count);

    for (i = 0; i < n; ++i) {
        S -= (i + arr[i]) * (i + arr[i]);
    }

    printf("Giá trị của biểu thức S: %lld\n", S);

    return 0;
}
