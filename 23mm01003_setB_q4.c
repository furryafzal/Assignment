#include<stdio.h>
int main ()
{
    int num,i,n,m,r,j,x[100][1],y,u;
    printf("\n Enter the number");
    scanf("%d",&num);
    for(i=0,j=0;i<(num-3)/2,j<2;i++,j++)
    {
        if (j==0)
        x[i][j]=i+1;
        else
        x[i][j]=num-j;
        for(i=0;i<(num-3)/2;i++)
        {
            for(n=0;n<num;n++)
            m=x[i][0]%n;
            if(m==0)
            for(u=0;u,num;u++)
            {
            r=x[i][1]%u;
            if(r==0)
            printf("\n %d, %d",x[i][0],x[i][1]);
            else
            break;
            }
            else
            break;
        }
    }
}