#include <stdio.h>

long long tinhGiaiThua(int n){
    long long result = 1;
    if (n < 0){
        return -1; 
    }
    for (int i = 1; i <= n; i++){
        result *= i;
    }
    return result; 
}

int main() {
    long long giaiThua = tinhGiaiThua(5);
    printf("Giai thua cua 5 la: %lld\n", giaiThua);

    return 0;
}

