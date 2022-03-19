#include<stdio.h>
void units_(int a[],int N)
{
    int i,units;
for(i=0;i<N;i++)
    {
     int total=0;
     if(a[i]>0&&a[i]<100)
     {
     total=total + a[i]*1.50;
     }
     else if(a[i]>100&&a[i]<250)
     {
     total=total + a[i]*2.3;
     }
     else if(a[i]>250&&a[i]<600)
     {
     total= total + a[i]*4;
     }
     else if(a[i]>600)
     {
        total=total + a[i]*5.5;
     }
     printf("Total bill to be paid by %d flat is %d\n",i,total);
    }
}
int main()
{
    int N,units,a[20],i;
    printf("Enter the number of flats\n");
    scanf("%d",&N);
    printf("Enter the units consumed\n");
    for(i=0;i<N;i++)
    {
    scanf("%d",&a[i]);
    }
    units_(a,N);
    return 0;
}

