#include <stdio.h>
#include <string.h>

void checkPalindrome(char str[]) {
    int len = strlen(str);
    int flag = 1;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag) 
    {
        printf("It is a palindrome!!!!\n");
    } else 
    {
        printf("Not a palindrome!!!!\n");
    }
}

int main() {
    char str_inp[30];

    printf("Enter ur string here: ");
    scanf("%s", str_inp);

    checkPalindrome(str_inp);

    return 0;
}
