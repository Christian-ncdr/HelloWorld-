#include <stdio.h> 

#define MAX 10

void displayTemperature(float arr[][MAX], int city, int days);
void averageTempCity(float arr[][MAX], int city, int days);
void averageTempDay(float arr[][MAX], int city, int days);
float lowestTemp(float arr[][MAX], int city, int days);
int highestTempCity(float arr[][MAX], int city, int days);

int main() {

    float temp [MAX][MAX];
    int rows = 0;
    int cols = 0;
    
    //Input for the number of city and days
    printf("Enter the number of cities: ");
    scanf("%d", &rows);
    printf("Enter the number of days: ");
    scanf("%d", &cols);

    //Input for each city and days(storing value in rows and columns)
    for(int i = 0; i < rows; i++) {
        printf("City %d:\n", i + 1);
        for(int j = 0; j < cols; j++) {
            printf("day %d: ", j + 1);
            scanf("%f", &temp[i][j]);
        }
    }

    printf("\nTemperature Table:\n");
    displayTemperature(temp, rows, cols);

    printf("\nAverage Temperature per City:\n");
    averageTempCity(temp, rows, cols);

    printf("\nAverage Temperature per Day:\n");
    averageTempDay(temp, rows, cols);

    float lowest = lowestTemp(temp, rows, cols);
    printf("\nLowest Temperature Recorded: %.2f", lowest);

    int highest = highestTempCity(temp, rows, cols);
    printf("\nHighest City Temperature: %d", highest);

    return 0;
}

void displayTemperature(float arr[][MAX], int city, int days) {
    for(int i = 0; i < city; i++) {
        for(int j = 0; j < days; j++) {
            printf("%.2f ", arr[i][j]);
        }
        printf("\n");
    }
}

void averageTempCity(float arr[][MAX], int city, int days) {
    for(int i = 0; i < city; i++) {
        int total = 0;
        for(int j = 0; j < days; j++) {
            total += arr[i][j];
        }
        float average = (float)total / city;
        printf("City %d: %.2f\n", i + 1, average);
    }
}

void averageTempDay(float arr[][MAX], int city, int days) {
    for(int j = 0; j < days; j++) {
        int total = 0;
        for(int i = 0; i < city; i++) {
            total += arr[i][j];
        }
        float average = (float)total / city;
        printf("Day %d: %.2f\n", j + 1, average);
    }
}

float lowestTemp(float arr[][MAX], int city, int days) {
    float lowest = arr[0][0];

    for(int i = 0; i < city; i++) {
        for(int j = 0; j < days; j++) {
            if(arr[i][j] < lowest) {
                lowest = arr[i][j];
            }
        }
    }

    return lowest;
}

int highestTempCity(float arr[][MAX], int city, int days) {
    int highest = 0;
    float Htotal = 0;
    for(int i = 0; i < days; i++) {
        float total = 0;
        for(int j = 0; j < city; j++) {
           total += arr[i][j];
        }

         if(i == 0 || total >  Htotal) {
               Htotal = total;
               highest = i;
            }
    }

    return highest;
}