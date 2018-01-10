#include <stdio.h>
int main()
{
    char b;
    int isLowercaseVowel, isUppercaseVowel;
    printf("Enter an alphabet: ");
    scanf("% b", &b);
    // evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (b == 'a' ||  b== 'e' || b == 'i' || b == 'o' || b == 'u');
    // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (b == 'A' || b == 'E' || b == 'I' || b == 'O' || b == 'U');
    // evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%b is a vowel", b);
    else
        printf("%c is a consonant", b);
    return(0);
}
