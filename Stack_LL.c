#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *top = NULL;

void print(){
    struct Node *go = top;
        printf("The Elements are : ");
        
    while(go != NULL){
        printf("%d->",go->data);
        go = go->next;
    }
    printf("NULL\n");
}
struct Node* push(struct Node *top,int x){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    if(newnode == NULL){
        printf("Stack Overflow.");
    }
    else{
        newnode->data = x;
        newnode->next = top;
        top = newnode;
        return top;
    }
}
int pop(struct Node *tp){
    if(tp == NULL){
         printf("Stack Underflow.");
  }
  else{
    struct Node *ptr = tp;
    top  = tp -> next;
    int x = ptr->data;
    free (ptr);
    return x;
  }
}
int main(){
 top = push(top,5);
 top = push(top,10);
 top = push(top,15);
 print(top);
 int element = pop(top);
 printf("Pop element %d in stack.\n",element);
 print(top);


    return 0;
}