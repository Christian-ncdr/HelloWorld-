#include <stdio.h>

#define MAX 20

void displayScores(int scores[][MAX], int rows, int cols);
void totalPerStudent(int scores[][MAX], int rows, int cols);
void averagePerSubject(int scores[][MAX], int rows, int cols);
int highestScores(int scores[][MAX], int rows, int cols);

int main() {

        int scores[MAX][MAX];
        int rows = 0;
        int cols = 0;
    
      //Asking the user for the inputs

      printf("Enter the number of the students: ");
      scanf("%d", &rows);
      printf("Enter the number of the subjects: ");
      scanf("%d", &cols);


      // input the data for every students
      for(int i = 0; i < rows; i++){
        printf("\nStudent %d:\n", i + 1);
        for(int j = 0; j < cols; j++){
            printf("\nSubject %d: ", j + 1);
            scanf("%d", &scores[i][j]);
        }
      }

      printf("\nScores Table:\n");
      displayScores(scores, rows, cols);

      printf("\nTotal per Students:\n");
      totalPerStudent(scores, rows, cols);

      printf("\nAverage per Subject:\n");
      averagePerSubject(scores, rows,  cols);

      int highest = highestScores(scores, rows, cols);
      printf("\nHighest score: %d", highest);
      


    return 0;
}

void displayScores(int scores[][MAX], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }
}

void totalPerStudent(int scores[][MAX], int rows, int cols){
    for(int i = 0; i < rows; i++){
        int total = 0;
        for(int j = 0; j < cols; j++){
            total += scores[i][j];
        }
        printf("Student %d: %d\n", i + 1, total);
    }
}

void averagePerSubject(int scores[][MAX], int rows, int cols){
    for(int j = 0; j < cols; j++){
        int total = 0;
        for(int i = 0; i < rows; i++){
            total += scores[i][j];
        }
        float average = (float)total / rows;
        printf("Subject %d: %.2f\n", j + 1, average);
    }
}

int highestScores(int scores[][MAX], int rows, int cols){
    int highest = scores[0][0];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(scores[i][j] > highest){
                highest = scores[i][j];
            }
        }
    }

    return highest;
}