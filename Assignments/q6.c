#include <stdio.h>
int high_rank(int a[],int n)
{
    int i;
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i] > max)
        {
            max=a[i];
        }
    }
    return max;
}

int low_rank(int a[],int n)
{
    int i;
    int min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i] < min)
        {
            min=a[i];
        }
    }
    return min;

}
void arrange(int a[], int n)
{
    int i, j, k, temp;

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Rankings in ascending order: \n");
    for (k = 0; k < n; k++){
        printf("%d\n", a[k]);
    }
}
int main()
{
    int i,n,a[25],m,p;
    printf("Enter the number of students");
    scanf("%d",&n);
    printf("Enter the rankings");

    for (i = 0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    arrange(a,n);
    m=high_rank(a,n);
    printf("Highest rank is %d\n",m);
    p=low_rank(a,n);
    printf("Lowest rank is %d\n",p);

    return 0;
}

