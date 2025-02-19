#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int len = strlen(str);
    char cleanedStr[len];
    int cleanedLen = 0;

    
    for (int i = 0; i < len; i++) {
        if (str[i] != ' ') {
            cleanedStr[cleanedLen++] = tolower(str[i]);
        }
    }


    for (int i = 0; i < cleanedLen / 2; i++) {
        if (cleanedStr[i] != cleanedStr[cleanedLen - 1 - i]) {
            return 0; 
        }
    }

    return 1;
}

int main() {     
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    if (isPalindrome(str)) {
        printf("Yes, it's a palindrome.\n");
    } else {
        printf("No, it's not a palindrome.\n");
    }

    return 0;
}