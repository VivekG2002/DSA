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
    fp=fopen("student.txt","w");
    if(fp==NULL)
    {
        printf("Error in opening the file");
        exit(0);
    }
    printf("Enter roll number\n");
    scanf("%d",&s1.roll);
    printf("Enter the name");
    scanf("%s",s1.name);
    fprintf(fp,"Name is %s\n",s1.name);
    fprintf(fp,"Roll number is %d\n",s1.roll);
    fclose(fp);
}
