#include<stdio.h>

void reversed_arr(int a[],int size)
{
    int b[30],i,j;
    printf("The reversed array is:\n");
    for(i=size-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }

   return 0;
}


int main()
{
   int a[30],i,j,size;
   printf("Enter the size of an array\n");
   scanf("%d",&size);
   printf("Enter array elements\n");
   for (i=0;i<size;i++)
   {
      scanf("%d",&a[i]);
   }
   reversed_arr(a,size);
   return 0;
}

