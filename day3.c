#include <stdio.h>

void swapValue(int *arr, int n);
int sumArray(int *arr, int n);
int prodArray(int *arr, int n);
void displayArray(int *arr, int n);


int main() {
    int n = 2;
    int arr[100];


    for(int i = 0; i < n; i++) {
        printf("Enter the value for the %d element: ", i + 1);
        scanf("%d", arr + i);
    }

    int sum =  sumArray(arr, n);
    int product = prodArray(arr, n);

    printf("\nOriginal Array: ");
    displayArray(arr, n);

    swapValue(arr, n);
    printf("\nSwap Array: ");
    displayArray(arr, n);

    printf("\nSum: %d", sum);
  

    printf("\nProduct: %d", product);
   

    return 0;
}

void displayArray(int *arr, int n) {
    for(int i = 0; i < n ; i++) {
        printf("%d", *(arr + i));
    }
}

void swapValue(int *arr, int n) {
    int temp = *arr;
    *arr = *(arr + n - 1 );
    *(arr + n - 1) = temp;
}



int sumArray(int *arr, int n) {
    int sum = 0;
    for(int i = 0; i < 2 ; i++) {
        sum += *(arr + i);
    }

    return sum;
}

int prodArray(int *arr, int n) {
    int prod = 1;
    for(int i = 0 ; i < 2; i++) {
        prod *= *(arr + i);
    }

    return prod;
}