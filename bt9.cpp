#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, m;
    printf("Nhap so dong n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    int matrix[n][m];
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Nhap cac phan tu cua ma tran:\n");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    printf("matrix[%d][%d] = ", i, j);
                    scanf("%d", &matrix[i][j]);
                }
            }
        } else if (choice == 2) {
            printf("Ma tran:\n");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    printf("%d ", matrix[i][j]);
                }
                printf("\n");
            }
        } else if (choice == 3) {
            printf("Cac phan tu o goc:\n");
            printf("%d %d\n", matrix[0][0], matrix[0][m - 1]);
            printf("%d %d\n", matrix[n - 1][0], matrix[n - 1][m - 1]);
        } else if (choice == 4) {
            printf("Cac phan tu tren duong bien:\n");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                        printf("%d ", matrix[i][j]);
                    }
                }
            }
            printf("\n");
        } else if (choice == 5) {
            printf("Cac phan tu tren duong cheo chinh va cheo phu:\n");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (i == j || i + j == m - 1) {
                        printf("%d ", matrix[i][j]);
                    }
                }
            }
            printf("\n");
        } else if (choice == 6) {
            printf("Cac phan tu la so nguyen to:\n");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (isPrime(matrix[i][j])) {
                        printf("%d ", matrix[i][j]);
                    }
                }
            }
            printf("\n");
        } else if (choice == 7) {
            printf("Thoat chuong trinh.\n");
        } else {
            printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }

    } while (choice != 7);

    return 0;
}

