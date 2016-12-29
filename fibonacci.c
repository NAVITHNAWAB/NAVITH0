#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,t1=0,t2=1,t3;
    printf("enter number of terms");
    scanf("%d",&n);
    printf("fibonacci Series");
    for (i=1;i<n;i++)
    {
      if(i==1)
        {
          printf("%d",t1);
          continue;
        }
        if(i==2)
        {
          printf("%d",t2);
          continue;
        }
        t3=t1+t2;
        t1=t2;
        t2= t3;
        printf("%d",t3);
    }
    return0;
}