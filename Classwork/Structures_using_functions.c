#include<stdio.h>
#include<stdlib.h>
struct employee
{
    int id;
    char name[50];
};

void read(struct employee *e,int n)
{
    int i;
    printf("Enter employee details\n");
    for(i=0;i<n;i++)
    {
        printf("Enter employee id\n");
        scanf("%d",&(e+i)->id);
        printf("Enter employee name\n");
        scanf("%s",(e+i)->name);
    }
}

void display(struct employee *e,int n)
{
    printf("Displaying information:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",(e+i)->id);
        printf("%s\n",(e+i)->name);
    }
}


int main()
{
    int n,i;
    struct employee *e;
    printf("Enter the number of employees\n");
    scanf("%d",&n);
    e=(struct employee*)malloc(n*sizeof(struct employee));
    if(e==NULL)
    {
        printf("Error!Memory cant be allocated");
        exit(0);
    }
    read(e,n);
    display(e,n);
    free(e);
}
