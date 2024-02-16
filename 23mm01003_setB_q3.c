#include<stdio.h>
int main()
{
    int x,y,r,x1,y1,dist,w;
    printf("\n Enter the value of radius and x,y coordinates of the centre ");
    scanf("%d%d%d",&r,&x,&y);
    printf ("\n Enter the x,y coordinates of the given point ");
    scanf("%d%d", &x1,&y1);
    dist= (x1-x)*(x1-x) + (y1-y)*(y1-y);
    w=r*r;
    if (dist==w)
    printf("\n Point lies on the circle ");
    else if(dist>w)
    printf("\n point lies outside the circle");
    else
    printf("\n point lies inside the circle");

    return 0;
}