#include <stdio.h>

#define MAX 10

void display(int *arr, int rows, int cols);
int totalSum(int *arr, int rows, int cols);
int maxValue(int *arr, int rows, int cols);
int main(){
    
     int arr[MAX][MAX];
     int rows = 0;
     int cols = 0;

     printf("Enter rows: ");
     scanf("%d", &rows);
     printf("Enter columns: ");
     scanf("%d", &cols);

     //input values in 2d array
     for(int i = 0; i < rows; i++){
        printf("Row %d\n", i + 1);
        for(int j = 0; j < cols; j++) {
            printf("Enter value #%d: ", j + 1);
            scanf("%d", &arr[i][j]);
        }
     }

     display(&arr[0][0], rows, cols);
     printf("Total Sum: %d\n", totalSum(&arr[0][0], rows, cols));
      printf("Max Value: %d\n", maxValue(&arr[0][0], rows, cols));

    return 0;
}

void display(int *arr, int rows, int cols) {
    printf("\nTable\n");

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
             printf("%4d", *(arr + i * MAX + j));
        }
        printf("\n");
    }
}

int totalSum(int *arr, int rows, int cols) {
    int sum = 0;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum += *(arr + i * MAX + j);
        }
    }

    return sum;
}

int maxValue(int *arr, int rows, int cols) {
    int max = *arr;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(*(arr + i * cols + j) > max){
                max = *(arr + i * MAX + j);
            }
        }
    }

    return max;
}