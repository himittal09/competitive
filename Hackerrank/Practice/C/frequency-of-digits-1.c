#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int i;
    char *s = (char *)malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = (char *)realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    
    int count[10] = {0,0,0,0,0,0,0,0,0,0};

    for (i=0; i<strlen(s); i++) {
        count[((int)s[i])-48]++;
    }

    for (i=0; i<10; i++) {
        printf("%d ", count[i]);
    }   

    return 0;
}