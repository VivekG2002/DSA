#include <stdio.h>
void read_arr(int[],int);//Prototyping
void find_key(int[],int);

int main()
{
    int a[100];
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    read_arr(a,n);//Function call
    find_key(a,n);

    return 0;
}
void read_arr(int a[], int c)
{
	int i;
	printf("Enter the array elements\n",c);

	for(i=0;i<c;i++)
      {
	   scanf("%d",&a[i]);
	}

}
void find_key(int a[],int c)
{
    int i,j=0,key;
    printf("Enter the key number\n");
    scanf("%d",&key);
    for(i=0;i<c;i++)
    {
        if(a[i]==key)
        {
            j=i+1;
            printf("The key number is present in the %d position \n",j);

        }
    }
}
