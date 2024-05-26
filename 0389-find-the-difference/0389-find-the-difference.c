#include <string.h>

    void remChar(char * str, int index){
        int i;
        char * ostr = str;

        if (strlen(str) == 0)
            return ;
        
        for (i = 0; i < index; i++)
            str[i] = ostr[i];
        for (i = index; ostr[i] != '\0'; i++)
            str[i] = ostr[i + 1];
    }

    char findTheDifference(char* s, char* t) 
    {
        int i, j;

        if (strlen(s) == 0)
            return t[0];
        
        for (i = 0; t[i] != '\0'; i++)
        {
            for (j = 0; s[j] != '\0'; j++)
            {
                if(t[i] == s[j])
                {
                    remChar(t, i);
                    remChar(s, j);
                    i = -1;
                    break;
                }
            }
        }
        return t[0];
    }