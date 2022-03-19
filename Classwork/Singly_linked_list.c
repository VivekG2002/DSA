//OPERATIONS ON SINGLY LINKED LIST
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data; //DATA FIELD
    struct node *next;  //ADDRESS FIELD
}*head;


void createNode(int n);
void insert_at_front(int data);
void insert_at_end(int data);
void insert_at_pos();
void delete_beginning();
void delete_end();
void display();


int main()
{
    int n, data,data1,choice;
    while (1) {

        printf("\n*******************************************************************************\n");
        printf("1) Create a node\n");
        printf("2) Insert at beginnning\n");
        printf("3) Insert at end\n");
        printf("4) Insert at any position\n");
        printf("5) Delete first element\n");
        printf("6) Delete last element\n");
        printf("7) Delete of element at any position\n");
        printf("8) To exit\n");
        printf("\n Enter Choice\n");
        printf("\n*******************************************************************************\n");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter the total number of nodes\n");
            scanf("%d", &n);
            createNode(n);
            printf("\nData in the list \n");
            display();
            break;
        case 2:
             printf("Enter data to insert at beginning\n");
             scanf("%d", &data);
             insert_at_front(data);
             display();
            break;
        case 3:
            printf("Enter data to insert at end\n");
            scanf("%d", &data1);
            insert_at_end(data1);
            printf("\nData in the list \n");
            display();
            break;
        case 4:
            insert_at_pos();
            break;
        case 5:
            delete_beginning();
            printf("\nData in the list \n");
            display();
            break;
        case 6:
            delete_end();
            printf("\nData in the list \n");
            display();
            break;
        case 7:
            deletePosition();
            display();
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}


void createNode(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head =(struct node*)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {

        printf("Enter the data of node 1\n");
        scanf("%d", &data);
        head->data=data;
        head->next=NULL;
        temp = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d\n", i);
                scanf("%d", &data);
                newNode->data = data;
                newNode->next = NULL;
                temp->next = newNode;
                temp = temp->next;
            }
        }

        printf("Singly linked list created\n");
    }
}

void insert_at_front(int data)
{
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data;
        newNode->next = head;

        head = newNode;

        printf("Data  has been successfully inserted at front\n");
    }
}

void insert_at_end(int data1)
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data= data1;
        newNode->next = NULL;

        temp = head;

        while(temp != NULL && temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;

        printf("Data has been successfully inserted at end\n");
    }
}

void insert_at_pos()
{
    struct node *temp, *newnode;
    int pos, data, i = 1;
    newnode = malloc(sizeof(struct node));
    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &data);
    temp = head;
    newnode->data= data;
    newnode->next= 0;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->next= temp->next;
    temp->next= newnode;
}


void delete_beginning()
{
    struct node *del;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        del= head;
        head = head->next;

        printf("\nData deleted = %d\n", del->data);

        free(del);

        printf("Node deleted successfully\n");
    }
}

void deletePosition()
{
    struct node *temp, *position;
    int i = 1, pos;
    if (head== NULL)
        printf("\nList is empty\n");
    else
    {
        printf("\nEnter position\n");
        scanf("%d", &pos);
        position = malloc(sizeof(struct node));
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        position = temp->next;
        temp->next = position->next;

        free(position);
    }
}

void delete_end()
{
    struct node *del, *secondLastNode;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        del=head;
        secondLastNode = head;
        while(del->next != NULL)
        {
            secondLastNode=del;
            del=del->next;
        }

        if(del==head)//in case of single node
        {
            head = NULL;
        }
        else
        {
            secondLastNode->next = NULL;
        }

        free(del);

        printf("Node has been successfully deleted\n");
    }
}


void display()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}
