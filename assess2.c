#include <stdio.h>

int totalSalary(int *arr, int n);
float aveSalary(int *arr, int n, int sum);
int highSalary(int *arr, int n);

int main() {

    int n = 0;
    int arr[100];

    printf("Enter the n of Employees: ");
    scanf("%d", &n);

    for(int i = 0; i < n ; i++) {
        printf("Enter the salary of #%d Employee: ", i + 1);
        scanf("%d", arr + i);
    }

    int sum = totalSalary(arr, n);
    float ave = aveSalary(arr, n, sum);
    int max = highSalary(arr, n);

    printf("\nTotal Salary: %d", sum);
    printf("\nAverage Salary: %.2f", ave);
    printf("\nMax Salary: %d", max);

    return 0; 
}

int totalSalary(int *arr, int n) {
    int totalSalary = 0;

    for(int i = 0; i < n ; i++) {
        totalSalary += *(arr + i);
    }

    return totalSalary;
}

float aveSalary(int *arr, int n, int sum) {
    return (float)sum / n;
}

int highSalary(int *arr, int n) {
    int max = *arr;
    
    for(int i = 1; i < n; i++) {
        if(*(arr + i) > max) {
        max = *(arr + i);
        }
    }

    return max;
}