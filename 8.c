#include<stdio.h>
#include<string.h>

struct helloworld
{
    char title[6];
    char name[10];
    int age;
};

int main(int argc, char const *argv[])
{
    struct helloworld hiworld;
    int sumAge=0;
    int multi;
    printf("Enter your Title Name and Age : ");
    scanf("%s %s %d",hiworld.title,hiworld.name,&hiworld.age);

    printf("Hello ");
    if(hiworld.age >= 20)
    {
        printf("%s ",hiworld.title);
    }
    printf("%s \n",hiworld.name);
    for(int i=0;i<=hiworld.age;i++)
    {
        sumAge = sumAge+ i;
    }
    printf("Sum of 1-Age : %d\n",sumAge);
    for(int i=1;i<hiworld.age;i++)
    {
        if(i+1 == hiworld.age)
        {
            printf("%d\n",i);
        }
        else if(i %  3 == 0 ||i % 5 ==0 )
        {
            printf("%d,",i);
        }
        
    }
    multi = hiworld.age - 20;
    if(multi > 12)
    {
        multi = 12;
    }
    for(int i=1;i<=12;i++)
    {
        printf("%d x %d = %d\n",multi,i,multi*i);
    }


    return 0;
}
