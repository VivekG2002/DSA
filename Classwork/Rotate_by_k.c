#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node* NODE;

NODE rotatelist(NODE head, int k){
    int count=1;
    NODE cur;
    NODE knode;
    NODE start;
    NODE last;
    cur = head;
    while(count!=k && cur->next!=NULL){
        cur= cur->next;
        count++;
    }
    if(cur->next==NULL){
        printf("wrong k");
        return head;
    }
    knode = cur;
    start = cur->next;
    while(cur->next!=NULL){
        cur = cur->next;
    }
    last =cur;

    last->next = head;
    knode->next = NULL;
    head = start;
   return head;
}

void printList(struct Node* node)
{
    // Print the list after loop removal
    while (node != NULL) {
        printf("%d ",node->data);
        node = node->next;
    }
}

struct Node* newNode(int key)
{
    struct Node* temp =(struct Node*)malloc(sizeof(struct Node));// Node();
    temp->data = key;
    temp->next = NULL;
    return temp;
}

// Driver Code
int main()
{
    struct Node* head = newNode(50);
    head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(10);

    printList(head);
     head = rotatelist(head,3);

    printf("Linked List after removing loop \n");
    printList(head);
    return 0;
}
