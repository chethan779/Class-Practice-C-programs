#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_strtok(char *str, const char *delim)
{
    while(str != delim )
    {
        str++;
    }
    str = "\0";
    return str--;
}

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    char *token = strtok(str, ",");  
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }

    return 0;
}