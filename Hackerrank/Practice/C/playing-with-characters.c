#include <stdio.h>

int main() {
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    printf("%c\n%s\n%s", ch, s, sen);
    return 0;
}