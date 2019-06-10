#include<stdio.h>
int dotProduct(int num[],int num2[],int size)
{
    int dot = 0;
    int doty =0;
    for(int i=0; i<size-1; i++)
    {   
            dot = dot + num[i]*num[i+1];
            doty = doty+ num2[i]*num2[i+1];
        
        
    }
    return dot+doty;
}
int main(int argc, char const *argv[])
{
    int size;
    printf("Enter Size : ");
    scanf("%d",&size);

    int dotx[size];
    int doty[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter x%d : ",i+1);
        scanf("%d",&dotx[i]);
        printf("Enter y%d : ",i+1);
        scanf("%d",&doty[i]);
    }
    printf("Dot-Product is %d",dotProduct(dotx,doty,size));
    return 0;
}
