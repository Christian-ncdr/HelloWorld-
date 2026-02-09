#include <stdio.h>

void swapFirstLast(int *arr, int n);
void reverseArray(int *arr, int n);
int countGreaterThan(int *arr, int n, int value);
void displayArray(int *arr, int n);

int main() {
     int n = 0, value = 0;
     int arr[100];


     printf("Enter number of elements: ");
     scanf("%d", &n);

     for(int i = 0; i < n ; i++) {
        printf("Enter the value for the element %d: ", i + 1);
        scanf("%d", arr + i);
     }

     printf("\nOriginal Array: ");
        displayArray( arr , n);
    
     swapFirstLast (arr, n);
     printf("\nAfter Swapping First and Last: ");
     displayArray(arr , n);

    reverseArray( arr , n);
    printf("\nAfter Reversing Array: ");
    displayArray(arr , n);

    printf("\n\nEnter a value to compare: ");
    scanf("%d", &value);

    int count = countGreaterThan(arr, n, value);
    printf("Elements greater than %d: %d\n", value, count);

    return 0;
}

void displayArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d", *(arr + i));
    }
}

void swapFirstLast(int *arr, int n) {
    int last = *arr;
    *arr = *(arr + n - 1);
    *(arr + n -1 ) = last;
}

void reverseArray(int *arr, int n) {
    int *start = arr;
    int *end = arr + n - 1;

    while(start < end){
        int last = *start;
        *start = *end;
        *end  = last;

        start++;
        end--;
    }
}

int countGreaterThan(int *arr, int n, int value){
    int count = 0;

    for(int i = 0; i < n ; i++) {
        if(*(arr + i) > value) {
            count++;
        }
    }

    return count;
}