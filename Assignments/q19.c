#include<stdio.h>
#include<conio.h>
void bubble_sort(int A[10],int N);
void print(int A[10],int N);
int main()
{
    int A[10],N,j;
    printf("Enter the number of elements in array\n");
    scanf("%d",&N);
    printf("Enter the elements\n");
    for(j=0;j<N;j++)
    {
        scanf("%d",&A[j]);
    }
    printf("Array before sorting\n");
    print(A,N);
    bubble_sort(A,N);
    printf("Array after sorting\n");
    print(A,N);
}

void print(int A[10],int N)
{
    int j;
    for(j=0;j<N;j++)
    {
        printf("%d\n",A[j]);
    }
}
void bubble_sort(int A[10],int N)
{
    int i,j,temp;
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(A[j] > A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;

            }

        }

    }

}

