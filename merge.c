#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int v;
    struct node*next;
}node;
node*createNode(int v){
    node*newnode=(node*)malloc(sizeof(node));
    newnode->v=v;
    newnode->next=NULL;
    return newnode;
}
node*merge(node*a,node*b){
    if(a==NULL)return b;
    if(b==NULL)return a;
    if(a->v < b->v){
        a->next=merge(a->next,b);
        return a;
    }
    else{ b->next=merge(a,b->next);
    return b;
    }
}
void display(node*head){
    node*curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->v);
        curr = curr->next;
    }
    printf("NULL\n");
}
void appendNode(node**head,int v){
    node*newnode=createNode(v);
    if(*head==NULL)*head=newnode;
    else{
    node*curr=(*head);
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=newnode;
    }
    
}
int main()
{
    node*a=NULL;
    node*b=NULL;
    appendNode(&a, 1);
    appendNode(&a, 3);

    appendNode(&b, 2);
    appendNode(&b, 4);

    node*res=merge(a,b);
    display(res);
}
