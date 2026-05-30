#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void readWord(int counts[26]);
bool equalArray(int counts1[26], int counts2[26]);

int main(void)
{
    int counts1[26];
    int counts2[26];

    readWord(counts1);
    readWord(counts2);

  
    if (equalArray(counts1, counts2)) {
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams.\n");
    }

    return 0;
}

void readWord(int counts[26]) {
   
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }

    printf("Enter a word: ");
    
    
    char ch;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) { 
            char lowerCh = tolower(ch);
            counts[lowerCh - 'a']++; 
        }
    }
}

bool equalArray(int counts1[26], int counts2[26])
{
    for(int i = 0; i < 26; i++) {
        if(counts1[i] != counts2[i]) {
            return false; 
        }
    }
    
    return true; 
}