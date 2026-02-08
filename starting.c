#include <stdio.h>

int getSum(int *arr, int n);
float getAverage(int *arr, int n);
int getMax(int *arr, int n);

int main() {
   int n = 0;
   int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for(int i = 0 ; i < n ; i++){
        printf("Enter the element %d: ", i + 1);
        scanf("%d", arr + i);
    }

    int sum = getSum(arr, n);
    float average = getAverage(arr, n);
    int max = getMax(arr, n);

    printf("sum %d\n", sum);
    printf("average %.2f\n", average);
    printf("max %d\n", max);



    return 0;


}

int getSum(int *arr, int n){
    int sum = 0;
    for (int i = 0; i < n ; i++){
        sum += *(arr + i);
    }

    return sum;
}

float getAverage(int *arr, int n){
    return (float)getSum(arr, n)/ n;
}

int getMax(int *arr, int n){
    int max = *arr;
    for(int i = 0; i < n ; i++) {
        if  (*(arr + i) > max){
             max = *(arr + i);
        }
    }

    return max;
}