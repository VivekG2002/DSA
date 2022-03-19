#include <stdio.h>
void read_array(int array_1[],int array_2[],int n)
{
    int i;
    printf("Enter the number of elements for the first array\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&array_1[i]);
    }
    printf("Enter the number of elements for the second array\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&array_2[i]);
    }
}
void exchange(int array_1[],int array_2[],int n)
{
    int i=0,temp=0;
    for(i=0;i<n;i++)
    {
        temp=array_1[i];
        array_1[i]=array_2[i];
        array_2[i]=temp;
    }
}

int main()
{
    int i=0,n,array_1[30],array_2[30];
    printf("Enter the size\n");
    scanf("%d",&n);
    read_array(array_1,array_2,n);
    exchange(array_1,array_2,n);

    printf("The arrays after swap are\n");

    for(i=0;i<n;i++)
    {
        printf("array_1 [%d] : %d\n",i,array_1[i]);
    }

    printf("\n");

    for(i=0;i<n;i++)
    {
	printf("array_2 [%d] : %d\n",i,array_2[i]);
    }

    return 0;
}

