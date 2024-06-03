#include <strings.h>

char* reverseVowels(char* s) {
    int size = strlen(s);
    char vowels[size];
    int index[size], j = 0, tmp;
    
    for (int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vowels[j] = s[i];
            index[j] = i;
            j++;
        }
    }
    
    tmp = j - 1;
    for (int i = tmp; i >= 0; i--)
    {
        s[index[i]] = vowels[tmp - i];
    }
    
    return s;
}