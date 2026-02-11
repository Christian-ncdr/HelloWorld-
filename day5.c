#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 0;
    int *arr;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int* )malloc(n * sizeof(int));


    if(arr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        printf("Input elements: ");
        scanf("%d", arr + i);
    }

    for(int i = 0; i < n; i++) {
        sum += *(arr + i);
    }

    float average = (float)sum / n;

    printf("\nSum: %d", sum);
    printf("\nAve: %.2f", average);

    free(arr);


    return 0;
}