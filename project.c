#include <stdio.h>
#include <string.h>
void reverseString(char str[], char rev[]) {
    int i, len;
    len = strlen(str);
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
}
int isPalindrome(char str[]) {
    int i, len;
    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char str[100], rev[100];
    int choice;
    do {
        printf("\n===== Palindromic String Analyzer =====\n");
        printf("1. Enter a String\n");
        printf("2. Reverse the String\n");
        printf("3. Check Palindrome\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1:
                printf("Enter the string: ");
                gets(str);
                break;
            case 2:
                reverseString(str, rev);
                printf("Reversed String: %s\n", rev);
                break;
            case 3:
                if (isPalindrome(str))
                    printf("The string is a PALINDROME.\n");
                else
                    printf("The string is NOT a palindrome.\n");
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);
    return 0;
}