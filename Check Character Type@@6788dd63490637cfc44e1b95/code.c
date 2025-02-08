#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if (ch=="a" || ch=="i" || ch=="e" || ch=="o" || ch=="u" || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    printf("%c",Vowel);
    else if ((ch>=a && ch<=z) || (ch>=A && ch<=Z))
    printf("%c",Consonant);
    else if (ch>=0 && ch<=9)
    printf("%c",Digit);
    else
    printf("%c",Special Character);
    return 0;

}