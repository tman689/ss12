#include <stdio.h>

void inMang(int arr[], int n){
	printf("cac phan tu trong mang: ");
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    printf("\n"); 
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    inMang(arr, n);

    return 0;
}

