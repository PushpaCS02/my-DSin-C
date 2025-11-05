#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node* next;
};
struct Node* head=NULL;
void insertbegin(int value){
    struct Node* newNode=malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}
void display(){
    struct Node* temp=head;
    while(temp != NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

    int main(){
        insertbegin(10);
        insertbegin(20);
        insertbegin(30);
        display();
        return 0;
}

