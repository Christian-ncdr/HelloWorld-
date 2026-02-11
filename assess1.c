#include <stdio.h>

float computeAverage(int *arr, int students);
int maxGrade(int *arr, int students);
int minGrade(int *arr, int students);
int passedStudents(int *arr, int students);

int main() {
    int students = 0;
    int arr[100];

    printf("Enter the n of students: ");
    scanf("%d", &students);

    for(int i = 0; i < students; i++) {
        printf("Enter the grade of student #%d: ", i + 1);
        scanf("%d", arr + i);

        if(*(arr + i) <= 0 || *(arr + i) > 100){
            printf("INVALID GRADE! (grade should be below 100 and greater than 0)\n");
            arr + i--;
        }
    }

    float ave = computeAverage(arr, students);
    int high = maxGrade(arr, students);
    int low = minGrade(arr, students);
    int passed = passedStudents(arr, students);

    printf("\nAverage Grade: %.2f", ave);
     printf("\nHighest Grade: %d", high);
      printf("\nLowest Grade: %d", low);
       printf("\nPASSED Students: %d", passed);


    return 0;
}

float computeAverage(int *arr, int students) {
    float average = 1;
    int sum = 0;
    for(int i = 0; i < students; i++) {
         sum += *(arr + i);
    }

        average *= (float) sum / students;

    return average;
}

int maxGrade(int *arr, int students) {
    int max = *arr;

    for(int i = 0; i < students; i++) {
        if(*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    return max;
}

int minGrade(int *arr, int students) {
    int min = *arr;

    for(int i = 0; i < students; i++) {
        if(*(arr + i) < min) {
            min = *(arr + i);
        }
    }

    return min;
}

int passedStudents(int *arr, int students) {
    int passed = 0;

    for(int i = 0; i < students; i++) {
        if(*(arr + i) >= 75 ) {
            passed++;
        }
    }

    return passed;
}