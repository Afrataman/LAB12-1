#include <stdio.h>
#include <string.h>

int main() {
  
    char firstString[50], secondString[50];


    printf("Enter first string: ");
    scanf("%s", firstString);

   
    printf("Enter second string: ");
    scanf("%s", secondString);

 
    strcat(firstString, secondString);

   
    printf("After concatenation: %s\n", firstString);

    return 0;
}

