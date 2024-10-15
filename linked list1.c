#include<stdio.h>
struct Node{
int data;
struct Node *next;
};
int main(){
 struct Node *one = NULL;
 struct Node *two = NULL;
 struct Node *three = NULL;

   one = malloc(sizeof(struct Node));
   two = malloc(sizeof(struct Node));
 three = malloc(sizeof(struct Node));

   one -> data = 10;
   two -> data = 20;
 three -> data = 30;

   one -> next = two;
   two -> next = three;
 three -> next = NULL;

 while(one != NULL){
    printf("%d  ",one->data);
    one = one -> next;
 }

return  0;
}
