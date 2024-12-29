#include <stdio.h>

int kiemTraSoNguyenTo(int n){
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return 0; 
        }
    }
    return 1; 
}

int main(){
    int num1, num2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    if (kiemTraSoNguyenTo(num1)) {
        printf("%d la so nguyen to.\n", num1);
    } else {
        printf("%d khong phai la so nguyen to.\n", num1);
    }
    if (kiemTraSoNguyenTo(num2)) {
        printf("%d la so nguyen to.\n", num2);
    } else {
        printf("%d khong phai la so nguyen to.\n", num2);
    }

    return 0;
}

