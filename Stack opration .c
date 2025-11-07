#include<stdio.h>
#define max 5
int stack[max];
int top=-1;
void push(int value){
    if(top==max-1){
        printf("stack is overflow\n");
    }
    else{
        stack[++top]=value;
        printf("%d push\n",value);
    }
}
void pop(){
    if(top==-1){
        printf("stack is underflow\n");
    }
    else{
        printf("\n%d pop\n",stack[top]);
        top--;
    }
}
void peek(){
     if(top==-1){
        printf("stack is underflow\n");
    }
    else{
        printf("\npeek is :%d",stack[top]);
    }
    
}
void display(){
    if(top==-1){
        printf("stack is underflow\n");
    }
    else{
        printf("stack elements:");
        for(int i=top;i>=0;i--){
            printf("%d ",stack[i]);
            
        }
    }
}
int main(){
    push(2);
    push(6);
    push(9);
    push(1);
    display();
    peek();
    display();
    pop();
    pop();
    display();
    return 0;
}
