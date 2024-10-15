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
struct Node* insert_atFirst(struct Node *head){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data=5;
    temp->next = head;
   // head=temp;   
  return temp;
}
struct Node* insert_atBetween(struct Node *head){
  
  struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
   struct Node *go = head;
   int i=0;
   while(i != 1){
    go = go -> next;
    i++;
   }
   temp->data = 15;
   temp->next = go->next;
   go->next = temp;
}
struct Node* insert_atEnd(struct Node *head){
   struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
   struct Node *go = head;
   int i=0;
   while(go->next != NULL){
    go = go->next;
    i++;
   }
   temp->data = 50;
   go->next = temp;
   temp->next = NULL;
}
struct Node* insert_AfterNode(struct Node *head,struct Node *prevNode){
   struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
  temp -> data = 65;
    temp->next = prevNode->next;
    prevNode->next = temp;
    
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
    head=insert_atFirst(head);
     traverse(head);
     insert_atBetween(head);
     traverse(head);
     insert_atEnd(head);
     traverse(head);
     insert_AfterNode(head,three);
     traverse(head);   

    return 0;
}