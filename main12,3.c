#include <stdio.h>
#include <ctype.h>

int main() {
   
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    
   
    char inputString[100];

   
    printf("Enter a line of string: ");
    scanf("%[^\n]", inputString);

 
    for (int i = 0; inputString[i] != '\0'; i++) {
    
        if (tolower(inputString[i]) == 'a' || tolower(inputString[i]) == 'e' ||
            tolower(inputString[i]) == 'i' || tolower(inputString[i]) == 'o' ||
            tolower(inputString[i]) == 'u') {
            vowels++;
        }
      
        else if (isalpha(inputString[i])) {
            consonants++;
        }
        
        else if (isdigit(inputString[i])) {
            digits++;
        }
      
        else if (isspace(inputString[i])) {
            spaces++;
        }
    }

 
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("White spaces: %d\n", spaces);

    return 0;
}

