#include<stdio.h>
#include<string.h>
char word1[80],word2[80];
main(int argc, char const *argv[])
{
    int hamming = 0;
    printf("Enter Word 1 : ");
    scanf(" %s",word1);
    printf("Enter Word 2 : ");
    scanf(" %s",word2);
    for(int i=0;i<80;i++)
    {
        if(word1[i] == '\0' && word2[i] == '\0')
        {
            break;
        }
        else if(word1[i] + 32 == word2[i] || word1[i] == word2[i] || word1[i] - 32 == word2[i])
        {
            ;
        }
        else
        {
            hamming++;
        }
    }
    printf("Hamming is %d",hamming);

    return 0;
}
