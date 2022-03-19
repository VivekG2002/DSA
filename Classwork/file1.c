#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("sample.txt","w");
    if(fp==NULL)
    {
        printf("Error in opening the file");
        exit(0);
    }
    printf("Input the data\n");
    while((ch=getchar())!=EOF)
    fputc(ch,fp);
    fclose(fp);
    printf("The file contains\n");
    fp=fopen("sample.txt","r");
    while((ch=fgetc(fp))!=EOF)
    putchar(ch);
    fclose(fp);
}
