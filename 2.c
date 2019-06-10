#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y;
    printf("Enter Size : ");
    scanf(" %d",&x);
    if(x % 2 == 0)
    {
        printf("Must be odd number");
        return 0;
    }
    else
    {
        y = x;  
        for(int k=0;k<y;k++)
        {
        for(int i=0 ;i<x;i++)
        {
           
            if(k == y/2 && i == y/2)
            {
                printf("3 ");
            } 
            else if(i == k || i == x-k-1 )
            {
                printf("2 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
        }
    }
    
    return 0;
}
