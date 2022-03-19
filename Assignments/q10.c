#include<stdio.h>
void is_Prime(int n)
{
    int i,j;
    printf("Prime numbers are\n");
    for(i=2;i<=n;i++)
    {
        int count=0;
        for(j=1;j<=i;j++)
        {
        if(i%j==0)
        {
            count++;
        }
        }
    if(count==2)
    {
        printf("%d\n",i);
    }
    }
}
int main()
{
    int n;
    printf("Enter the limit\n");
    scanf("%d",&n);
    is_Prime(n);
return 0;
}


