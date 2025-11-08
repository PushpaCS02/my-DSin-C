#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
int main(){
    struct node* root=malloc(sizeof(struct node));
    struct node* leftchild=malloc(sizeof(struct node));
     struct node* rightchild=malloc(sizeof(struct node));
     root->data=1;
     leftchild->data=2;
     rightchild->data=3;
     root->left=leftchild;
     root->right=rightchild;
     leftchild->left=leftchild->right=NULL;
     rightchild->left=rightchild->right=NULL;
     printf("%d root\n",root->data);
     printf("%d leftchild\n",leftchild->data);
      printf("%d ightchild",rightchild->data);
      return 0;
     
}
