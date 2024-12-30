#include <stdio.h>

int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Nhap vao so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen b: ");
    scanf("%d", &b);
    int result = ucln(a, b);
    printf("Uoc chung lon nhat cua %d và %d là: %d\n", a, b, result);
    
    return 0;
}

