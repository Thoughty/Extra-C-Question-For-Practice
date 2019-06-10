#include<stdio.h>
int main(int argc, char const *argv[])
{
    char numRE[50];
    int end;
    printf("Enter number : ");
    scanf("%s",numRE);
    
    for(int i=0;i<50;i++)
    {
        if(numRE[i] == '\0')
        {
            end = i;
            break;
        }
    }
    for(int i = end;i>=0;i--)
    {
        printf("%c",numRE[i]);
    }
    return 0;
}
