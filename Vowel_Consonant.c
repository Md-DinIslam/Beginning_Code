#include <stdio.h>
int main()
{
    int lw_vowel, up_vowel;
    char ch;
    printf("Enter a alphabet:\n");
    scanf("%c", &ch);
    lw_vowel=(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    up_vowel=(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if(lw_vowel || up_vowel)
    {
        printf("%c is a vowel:\n",ch);
    }
    else
    {
        printf("%c is a consonant:\n",ch);
    }
    return 0;
}