#include<stdio.h>
#include<stdlib.h>
struct book
{
    int bno;
    char name[10];
};
int main()
{
    FILE *fp;
    struct book b[5];
    int i;
    fp=fopen("sp.text","wb");
    if(fp==NULL)
    {
        printf("Error\n");
        exit(0);
    }
    printf("\nEnter 5 books details");
    for(i=0;i<5;i++)
    {
        printf("Enter book no");
        scanf("%d\n",&b[i].bno);
        printf("Enter name");
        gets(b[i].name);
    }
    fwrite(b,sizeof(struct book),5,fp);
    printf("Data stored successfully");
    fclose(fp);
    return 0;
}
