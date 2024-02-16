#include<stdio.h>
int main()
{
    int h ,r,V,S;
    printf("\n enter the value of radius and height");
    scanf("%d,%d",&r,&h);
    V=3.14*r*r*h;
    S=(2*3.14*r*r)+(2*3.14*r*h);
    printf("\n volume of the cylinder is %.2d and volume of the surface area is %.2d ", V,S);
    return 0;

}