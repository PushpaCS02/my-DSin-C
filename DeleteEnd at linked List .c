#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* head = NULL;
void insertbegin(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (!newnode) {
        printf("Memory allocation failed\n");
        return;
    }
    newnode->data = value;
    newnode->next = head;
    head=newnode;
}
void deleteEnd(){
if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    if (head->next == NULL) {
        printf("Deleted node with value: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    struct node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    printf("Deleted node with value: %d\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

void display() {
    struct node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    insertbegin(10);
    insertbegin(20);
    insertbegin(30);
    insertbegin(40);

    display();
    deleteEnd();
    display();
    deleteEnd();
    display();
    return 0;
}
