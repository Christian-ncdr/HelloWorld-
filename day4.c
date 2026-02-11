#include <stdio.h>


int countLength(char *str);
int countVowels(char *str);
void reverse(char *str);


int main() {

    char str [100];

    printf("Enter a one-liner string: ");
    fgets(str, sizeof(str), stdin);
    
    int count = countLength(str);
    int vowel = countVowels(str);

    printf("\nString Length: %d", count);
    printf("\nNumber of Vowels: %d", vowel);

    reverse(str);
    printf("\nReversed String: %s\n", str);

    return 0;
}

int countLength(char *str) {
    int count = 0;
        
    while(*str != '\n' && *str != '\0') {
        count++;
        str++;
    }

    return count;
}

int countVowels(char *str) {
    int count = 0;

        while(*str != '\n' && *str != '\0') {
            char ch = *str;

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'  ) {
                count++;
            }
            str++;

        }
        return count;
}

void reverse(char *str) {
    char *start = str;
    char *end = str;

    while(*end != '\n' && *end != '\0') {
        end++;
    }
    end--;

    while(start < end) {
        char temp = *start;   
        *start = *end;
        *end = temp;


        start++;
        end--;
    
    }
}