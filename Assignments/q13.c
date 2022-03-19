#include <stdio.h>
int checkPerfectNo(int num);
int main()
{
    int a[30],i,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        if(checkPerfectNo(a[i]))
            printf("%d is perfect number\n",a[i]);
        else
            printf("%d is not perfect number\n",a[i]);
    }
    return 0;
}
int checkPerfectNo(int num){
    int sum = 0;
    for(int i= 1; i<=num/2; i++)
        if(num % i == 0)
            sum+=i;
    return num == sum ;
}

