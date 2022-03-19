#include<stdio.h>
void check(int avg,int a[],int n)
{
int i;
int above=0,below=0;
for(i=0;i<n;i++)
{
    if(a[i]>avg)
    {
        above++;
    }
    else
    {
        below++;
    }
}
printf("%d ppl got more than average\n",above);
printf("%d ppl got less than average\n",below);
}

int main()
{

int a[30],n,i;

float sum=0,avg=0;
printf("Enter the number of students\n");
scanf("%d",&n);
printf("Enter the marks of students\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    sum=sum+a[i];
}
avg=sum/n;
printf("Average of the class is %f\n",avg);
check(avg,a,n);
return 0;
}

