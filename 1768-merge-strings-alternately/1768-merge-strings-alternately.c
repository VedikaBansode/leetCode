char* mergeAlternately(char* word1, char* word2) {
    size_t i, j, k, l1, l2;
    k = 0;
    l1 = strlen(word1);
    l2 = strlen(word2);
    char* final = (char*)malloc((l1 + l2 + 1 ) * sizeof(char)); 
    
    for (i = 0, j = 0; i < l1 || j < l2; i++, j++) {
        if (i < l1)
            final[k++] = word1[i];
        if (j < l2)
            final[k++] = word2[j];
    }  
    final[k] = '\0';

    return final;
}