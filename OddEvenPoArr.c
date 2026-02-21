#include <stdio.h>
#define MAX 20

void display(int *arr, int rows, int cols);
int countEven(int *arr, int rows, int cols);
int countOdd(int *arr, int rows, int cols);
int countGreater(int *arr, int rows, int cols);
int main() {
    int arr[MAX][MAX];
    int rows = 0;
    int cols = 0;


    //inputting the value of rows and columns
    printf("Enter Rows: ");
    scanf("%d", &rows);
    printf("Enter Columns: ");
    scanf("%d", &cols);

    //input the value inside the rows and columns
    for(int i = 0; i < rows; i++) {
        printf("\nROWS: %d\n", i + 1);
        for(int j = 0; j < cols; j++) {
            printf("Enter Value #%d: ", j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    display(&arr[0][0], rows, cols);
    printf("\nEven Counter: %d\n", countEven(&arr[0][0], rows, cols));
    printf("Odd Counter: %d\n", countOdd(&arr[0][0], rows, cols));
     printf("Greater than 50 Counter: %d\n", countGreater(&arr[0][0], rows, cols));

    return 0;
}

void display(int *arr, int rows, int cols) {
    printf("\nTABLE:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%4d", *(arr + i * MAX + j));
        }
        printf("\n");
    }
}

int countEven(int *arr, int rows, int cols) {
    int count = 0;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(*(arr + i * MAX + j) % 2 == 0){
                count++;
            }
        }
    }

    return count;
}

int countOdd(int *arr, int rows, int cols) {
    int count = 0;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(*(arr + i * MAX + j) % 2 != 0) {
                count++;
            }
        }
    }

    return count;
}

int countGreater(int *arr, int rows, int cols) {
    int count = 0;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(*(arr + i * MAX + j) > 50) {
                count++;
            }
        }
    }

    return count;
}