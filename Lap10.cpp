#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    printf("Enter word: ");
    fgets(word, sizeof(word), stdin);
    
    // Remove newline character if present
    word[strcspn(word, "\n")] = 0;

    int len = strlen(word);
    int isPalindrome = 1;

    for (int i = 0; i < len / 2; i++) {
        if (tolower(word[i]) != tolower(word[len - 1 - i])) {
            isPalindrome = 0;
            break;
        }//end if
    }//end for

    if (isPalindrome) {
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }//end if else

    return 0;
}//end function