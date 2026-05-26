// 

#include <stdio.h>

int main() {
    char ch;  

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    
    // Check for uppercase letter
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is an Uppercase letter.\n", ch);
    }
    // Check for lowercase letter
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a Lowercase letter.\n", ch);
    }
    // Check for digit
    else if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a Digit.\n", ch);
    }
    // Any other character
    else {
        printf("The character '%c' is a Special character or symbol.\n", ch);
    }

    return 0;
}
