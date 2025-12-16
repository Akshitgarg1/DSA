#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    struct node*next;
    int data;
}node;
void pushAtBegin(node**head,int data)
{
    node*n=(node*)malloc(sizeof(node));
    n->data=data;
    n->next=(*head);
    (*head)=n;
}
void pushAtEnd(node**head,int data)
{
    node*n1=(node*)malloc(sizeof(node));
    n1->data=data;
    n1->next=NULL;
    node*temp=(*head);
    //if(*head==NULL){ *head=n1; return;}
    while(temp->next!=NULL) temp=temp->next;
    temp->next=n1;
}
void insertAfter(node*prev,int data)
{
    if(prev==NULL)
    { 
    printf("cannot be NULL");
    return;
    }
    node*n2=(node*)malloc(sizeof(node));
    n2->data=data;
    n2->next=prev->next;
    prev->next=n2;

}
void print(node*n)
{
    while(n!=NULL) {printf("%d\t",n->data); n=n->next;}
    printf("\n");
}
int main()
{
    node*head=NULL;
    pushAtBegin(&head,10);
    pushAtBegin(&head,20);
    pushAtBegin(&head,30);
    printf("begin:\n");
    print(head);
    pushAtEnd(&head,40);
    printf("end:\n");
    print(head);
    insertAfter(head,50);
    printf("given position:\n");
    print(head);
    return 0;
}