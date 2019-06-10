#include<stdio.h>
int main(int argc, char const *argv[])
{
    int Fibona[30]={0,1};
    
    for(int i=0;i<30;i++)
    {
        Fibona[i+2] = Fibona[i]+Fibona[i+1];
    }
    for(int i=0;i<30;i++)
    {
        printf("%d,",Fibona[i]);
    }
    
    return 0;
}
