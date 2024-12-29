#include<stdio.h>

int tinhTong(int a, int b){
    return a + b; 
}

int main(){
    int number1, number2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &number1);
    printf("Nhap so thu hai: ");
    scanf("%d", &number2);

    int tong = tinhTong(number1, number2);
    printf("Tong cua %d và %d là: %d\n", number1, number2, tong);

    return 0;
}


