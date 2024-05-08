#include <stdio.h>

typedef struct {
    double x;
    double y;
} Point;

void process_points(Point points[], int n) {
    // In các điểm
    printf("Cac điem đa nhap:\n");
    for (int i = 0; i < n; i++) {
        printf("(%f, %f)\n", points[i].x, points[i].y);
    }

    // Đếm số điểm thuộc góc phần tư thứ nhất
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (points[i].x > 0 && points[i].y > 0) {
            count++;
        }
    }
    printf("So điem thuoc goc phan tu thu nhat: %d\n", count);

    // Tính diện tích hình chữ nhật nhỏ nhất chứa tất cả các điểm
    double min_x = points[0].x, max_x = points[0].x;
    double min_y = points[0].y, max_y = points[0].y;
    for (int i = 1; i < n; i++) {
        if (points[i].x < min_x) min_x = points[i].x;
        if (points[i].x > max_x) max_x = points[i].x;
        if (points[i].y < min_y) min_y = points[i].y;
        if (points[i].y > max_y) max_y = points[i].y;
    }
    double area = (max_x - min_x) * (max_y - min_y);
    printf("Dien tich hinh chu nhat nho nhat chua tat ca cac điem: %f\n", area);
}

int main() {
    // Nhập dãy các điểm
    int n;
    printf("Nhap so luong điem: ");
    scanf("%d", &n);
    Point points[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap điem thu %d:\n", i + 1);
        printf("x = ");
        scanf("%lf", &points[i].x);
        printf("y = ");
        scanf("%lf", &points[i].y);
    }

    // Xử lý dãy các điểm
    process_points(points, n);

    return 0;
}
