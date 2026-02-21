#include <stdio.h>

#define MAX 10
void display(int *arr, int rows, int cols);
int computeSum(int *arr, int rows, int cols);
int computeCols(int *arr, int rows, int cols);
int highestRow(int *arr, int rows, int cols);

int main() {

    int arr[MAX][MAX];
    int rows = 0;
    int cols = 0;

    /*
    Display the matrix
    Compute sum of each row
    Compute sum of each column
    Find which row has the largest sum
    */
    //input the value of rows and columns
    printf("Enter Rows: ");
    scanf("%d", &rows);
    printf("Enter Columns: ");
    scanf("%d", &cols);

    for(int i = 0; i < rows; i++) {
        printf("\nRow %d:\n", i + 1);
        for(int j = 0; j < cols; j++) {
            printf("Enter value #%d: ", j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    

    display(&arr[0][0], rows, cols);
    printf("\nSum of Rows: %d", computeSum(&arr[0][0], rows, cols));
     printf("\nSum of Columns: %d", computeCols(&arr[0][0], rows, cols));
      printf("\nHighest Rows Total: %d", highestRow(&arr[0][0], rows, cols));

    return 0;
}

void display(int *arr, int rows, int cols) {
    printf("\nM A T R I X\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%4d", *(arr + i * MAX + j));
        }
        printf("\n");
    }
}
int computeSum(int *arr, int rows, int cols) {
    int sum = 0;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum += *(arr + i * MAX + j);
        }
    }

    return sum;
}
int computeCols(int *arr, int rows, int cols) {
    int sum = 0;

    for(int j = 0; j < cols; j++) {
        for(int i = 0; i < rows; i++) {
            sum += *(arr + i * MAX + j);
        }
    }

    return sum;
}
int highestRow(int *arr, int rows, int cols) {
     int highest = 0;
        int row = 0;
    
    for(int i = 0; i < rows; i++) {
       
        int total = 0;
        for(int j = 0; j < cols; j++) {
            total += *(arr + i * MAX + j);
        }

        if(i == 0|| total > row) {
            row = total;
            highest = i;
        }
    }
    
    return highest;
}

