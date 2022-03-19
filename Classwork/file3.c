#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int a[10],i;
    fp=fopen("array.txt","rb");
    if(fp==NULL)
    {
        printf("Error\n");
        exit(0);
    }
    printf("Array elements are");
    fwrite(a,sizeof(int),10,fp);
    for(i=0;i<10;i++)
    {
        printf("%d",&a[i]);
    }
    fclose(fp);
    return 0;
}
