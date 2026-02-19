#include <stdio.h>

int UpperCount(char *string);
int ConstCount(char *string);
void convertToUpper(char *string);
int countWords(char *string);

int main() {

    char string[100];

    printf("Enter a string(one full name): ");
    fgets(string, sizeof(string), stdin);

    int upperCounter = UpperCount(string);
    int constCounter = ConstCount(string);

    printf("\nTotal of Uppercase Letter: %d", upperCounter);
    printf("\nTotal of consonant letter: %d", constCounter);

    convertToUpper(string);
    printf("\nConverted to Uppercase: %s", string);

    int counter = countWords(string);
    printf("\nTotal words: %d", counter);

    return 0;
}

int UpperCount(char *string){
   int count = 0;

    while (*string != '\0') {

        if (*string >= 'A' && *string <= 'Z') {
            count++;
        }

        string++;  // move pointer forward
    }

    return count;
}
int ConstCount(char *string) {
  int count = 0;

    while (*string != '\0') {

        // Check if letter
        if ((*string >= 'A' && *string <= 'Z') || 
            (*string >= 'a' && *string <= 'z')) {

            // Convert to lowercase for easier checking
            char ch = *string;
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + ('a' - 'A');
            }

            // Check if NOT vowel
            if (ch != 'a' && ch != 'e' && 
                ch != 'i' && ch != 'o' && ch != 'u') {
                count++;
            }
        }

        string++;  // move pointer
    }

    return count;
}

void convertToUpper(char *string) {
    while(*string != '\0') {
        if(*string >= 'a' && *string <= 'z') {
            *string = *string - ('a' - 'A');
        }
        string++; // move pointer forward
    }
}

/* 

*string accesses the current character.

Check if it's between 'a' and 'z'.

Subtract 32 (difference between lowercase and uppercase).

Move pointer forward.

*/

int countWords(char *string) {
    int count = 0;
    int inword = 0;

    while(*string != '\0') {

        if(*string != ' ' && *string != '\n') {
            if(inword == 0) {
                count++;
                inword = 1;
            }
        } else {
            inword = 0;
        }
        string++;
    }
    
    return count;
}