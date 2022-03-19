#include<stdio.h>
#include<stdlib.h>
struct student
{
   char name[20];
   int roll;
};
void main()
{
    FILE *fp;
    char ch;
    struct student s1;
    int i;
    fp=fopen("student.txt","rb");
    if(fp==NULL)
    {
        printf("Error in opening the file");
        exit(0);
    }
    fread(&s1,sizeof(struct student),1,fp);
    printf("name is %s",s1.name);
    printf("roll number is %d",s1.roll);
    printf("Data stored successfully");
    fclose(fp);
}

