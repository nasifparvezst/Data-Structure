#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node *next;
}*head;
void traverse(struct Node *go){
        printf("The Elements are : ");
    while(go != NULL){
        printf("%d->",go->data);
        go = go->next;
    }
    printf("NULL\n");
}

int main(){
    struct Node *one,*two,*three,*four;
     one = (struct Node*)malloc(sizeof(struct Node));
     two = (struct Node*)malloc(sizeof(struct Node));
     three = (struct Node*)malloc(sizeof(struct Node));
     four = (struct Node*)malloc(sizeof(struct Node));

      one->data = 10;
      two->data = 20;
      three->data = 30;
      four->data = 40;

      one->next = two;
      two->next = three;
      three->next = four;
      four->next = NULL;
      head = one;

     traverse(head);
    
    return 0;
}