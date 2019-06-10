#include<stdio.h>
#define pi 3.14
float designShield(float x,float *area,float *cir)
{
    *area = pi*x*x;
   *cir = 2*pi*x;

}
int main(int argc, char const *argv[])
{
    float r,areaCir,Circum;
    printf("Enter Radius : ");
    scanf("%f",&r);
    designShield(r,&areaCir,&Circum);
    printf("Circumference is %.3f and area is %.3f",Circum,areaCir);
    return 0;
}
