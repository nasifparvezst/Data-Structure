#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node *next;
}*head;
void traverse(struct Node *go){
       go = head;
        printf("The Elements are : ");
    while(go != NULL){
        printf("%d->",go->data);
        go = go->next;
    }
    printf("NULL\n");
}
struct Node* delete_givenvalueNode(struct Node *head,int value){
    struct Node *go = head;
    struct Node *cur = NULL;
    //If value hold on head then
    if(go!=NULL && go->data == value){
      head = go->next;
      free(go);
      return head;
    }
    //If value is not holds on head then
    while(go != NULL && go->data != value){
        cur = go;
        go = go -> next;
    }
    if(go == NULL){
        printf("%d is not available in Linked List.",value);
        return head;
    }
    cur->next = go->next;
    free(go);

    return head;
}

int main(){
    struct Node *one,*two,*three,*four,*five;
     one = (struct Node*)malloc(sizeof(struct Node));
     two = (struct Node*)malloc(sizeof(struct Node));
     three = (struct Node*)malloc(sizeof(struct Node));
     four = (struct Node*)malloc(sizeof(struct Node));
     five = (struct Node*)malloc(sizeof(struct Node));

      one->data = 10;
      two->data = 20;
      three->data = 30;
      four->data = 40;
      five->data = 50;

      one->next = two;
      two->next = three;
      three->next = four;
      four->next = five;
      five->next = NULL;
      head = one;

     printf("Before Delete ");
     traverse(head);
     printf("After Delete ");
     head = delete_givenvalueNode(head,10);
     traverse(head);

    return 0;
}