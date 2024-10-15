#include<stdio.h>
#include<stdlib.h>
struct Node{
 int data;
 struct Node *next;
};
struct Node *LinkedList(int arr[],int size){
   struct Node *head = NULL, *temp = NULL, *current = NULL;
   for(int i=0;i<size;i++){
     temp = (struct Node *)malloc(sizeof(struct Node));
     temp ->data = arr[i];
     temp ->next = NULL;
     if(head == NULL){
        head = temp;
        current = temp;}            
     else{
        current ->next = temp;
        current = current ->next;
     }

   }
};
int main(){
   int arr[]={10,20,30,40};
   struct Node *head ;
   head = LinkedList(arr,4);

   while( head != NULL){
    printf("%d -> ",head->data);
      head = head->next;
   }

return 0;
}