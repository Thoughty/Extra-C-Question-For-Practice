#include<stdio.h>
void findMaxMin(int array[],int nElems,int *max,int *min)
{
    *max = -999999;
    *min =  999999;
    for(int i=0;i<nElems;i++)
    {
        if(*max < array[i])
        {
            *max = array[i];
        }
        if(*min > array[i])
        {
            *min = array[i];
        }
    }
}
int main(int argc, char const *argv[])
{
    int size;
    int max,min;
    printf("Enter size : ");
    scanf("%d",&size);
    int num[size];
    for(int i=0; i<size; i++)
    {
        printf("Enter Number %d : ",i+1);
        scanf("%d",&num[i]);
    }
    findMaxMin(num,size,&max,&min);
    printf("Max is %d and Min is %d ",max,min);
    return 0;
}
