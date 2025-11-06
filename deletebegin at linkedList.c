#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
void insertbegin(int value){
    struct node* newnode=malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
void deletebegin(){
    if(head==NULL){
        printf("node is empty\n");
        return;
    }
    struct node* temp=head;
    head=head->next;
    printf("deleted node value is:%d\n",temp->data);
    free(temp);
}
void display(){
    struct node* temp=head;
    if(temp==NULL){
        printf("node is empty\n");
        return;
    }
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
  }
int main(){
    insertbegin(10);
    insertbegin(20);
    insertbegin(30);
    insertbegin(40);
    display();
    deletebegin();
    display();deletebegin();
    display();
    
    return 0;
}
