#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("enter an alphabet:\t ");
    scanf("%c", &c);

    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    uppercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    if (lowercase_vowel || uppercase_vowel)
        printf("\n%c is a vowel.\n", c);
    else
        printf("\n%c is a consonant.\n", c);

} 
