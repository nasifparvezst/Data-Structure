#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node *prev;
  struct Node *next;
}*head,*one,*two,*three,*four;
void print(struct Node *go){
    go =  one->prev;
        printf("The Elements are : ");
    while(go->next != NULL){
        printf("%d->",go->data);
        go = go->next;
    }
    printf("NULL\n");
    }
struct Node* delete_atBetween(struct Node *head){
    struct Node *go = head;
   for(int i=1;i<2;i++){
     go = go->next;
   }
    struct Node *cur = go->next;
   go->next = cur->next;
   free(cur);
}

int main(){
   // struct Node *one,*two,*three,*four;
     one = (struct Node*)malloc(sizeof(struct Node));
     two = (struct Node*)malloc(sizeof(struct Node));
     three = (struct Node*)malloc(sizeof(struct Node));
     four = (struct Node*)malloc(sizeof(struct Node));

      one->data = 10;
      two->data = 20;
      three->data = 30;
      four->data = 40;

      one->prev = head;
      one->next = two;
      two->prev = one;
      two->next = three;
      three->prev = two;
      three->next = four;
      four->prev = three;
      four->next = NULL;
     // head = one;

     printf("Before Insert ");
     print(head);
     //printf("After Delete ");
     //delete_atBetween(head);
     //traverse(head);

    return 0;
}