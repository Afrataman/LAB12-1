#include <stdio.h>
#include <ctype.h>

int main() {
   
    char inputString[100], outputString[100];

    printf("Enter a string: ");
    scanf("%[^\n]", inputString);

 
    int i, j;
    for (i = 0, j = 0; inputString[i] != '\0'; i++) {
        if (isalpha(inputString[i])) {
            outputString[j] = inputString[i];
            j++;
        }
    }

  
    outputString[j] = '\0';


    printf("Output String: %s\n", outputString);

    return 0;
}

