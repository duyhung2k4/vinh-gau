#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

void process_points(Point points[], int n) {
    // In các điểm
    printf("Cac điem da nhap:\n");
    for (int i = 0; i < n; i++) {
        printf("(%f, %f)\n", points[i].x, points[i].y);
    }

    // Đếm số điểm thuộc góc phần tư thứ ba
    int count_third_quadrant = 0;
    for (int i = 0; i < n; i++) {
        if (points[i].x < 0 && points[i].y < 0) {
            count_third_quadrant++;
        }
    }
    printf("So điem thuoc goc phan tu thu ba: %d\n", count_third_quadrant);

    // Tính bán kính nhỏ nhất của hình tròn chứa tất cả các điểm thuộc góc phần tư thứ nhất
    double max_radius = 0;
    int count_first_quadrant = 0;
    for (int i = 0; i < n; i++) {
        if (points[i].x > 0 && points[i].y > 0) {
            count_first_quadrant++;
            double radius = sqrt(points[i].x * points[i].x + points[i].y * points[i].y);
            if (radius > max_radius) {
                max_radius = radius;
            }
        }
    }
    printf("Ban kinh nho nhat cua hinh tron chua tat ca cac điem thuoc goc phan tu thu nhat: %f\n", max_radius);

    // Đếm số điểm không thuộc đường tròn trên
    int count_outside_circle = 0;
    for (int i = 0; i < n; i++) {
        double radius = sqrt(points[i].x * points[i].x + points[i].y * points[i].y);
        if (radius > max_radius) {
            count_outside_circle++;
        }
    }
    printf("So điem khong thuoc đuong tron tren: %d\n", count_outside_circle);
}

int main() {
    // Nhập dãy các điểm
    int n;
    printf("Nhap so luong diem: ");
    scanf("%d", &n);
    Point points[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap diem thu %d:\n", i + 1);
        printf("x = ");
        scanf("%lf", &points[i].x);
        printf("y = ");
        scanf("%lf", &points[i].y);
    }

    // Xử lý dãy các điểm
    process_points(points, n);

    return 0;
}
