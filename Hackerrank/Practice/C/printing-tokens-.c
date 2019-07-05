#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *s = (char *)malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = (char *)realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    char *token=strtok(s, " ");
    // printf("%s", token);
    // printf("%s", s);

    while (token) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}