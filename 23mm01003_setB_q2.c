#include<stdio.h>
int main()
{
    int num,i,r,k;
    k=0;
    printf("\n Enter a number");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
      r=num%i;
      if(r==0)
      k=k+i;
      else
      break;
    }
    if (k==num)
    printf("\n Given number is perfect ");
    else 
    printf("\n Given number is not perfect ");

    return 0;

}