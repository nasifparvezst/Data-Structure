#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node* link;
};
int main(){
  struct node *head, *temp1,*temp2,*temp3,*temp4,*temp5,*temp6,*temp7,*temp8;
   temp1 = (struct node*)malloc(sizeof(struct node));
   temp2 = (struct node*)malloc(sizeof(struct node));
   temp3 = (struct node*)malloc(sizeof(struct node));
   temp4 = (struct node*)malloc(sizeof(struct node));
   temp5 = (struct node*)malloc(sizeof(struct node));
   temp6 = (struct node*)malloc(sizeof(struct node));
   temp7 = (struct node*)malloc(sizeof(struct node));
   temp8 = (struct node*)malloc(sizeof(struct node));


     temp1 -> info = 57;
     temp2 -> info =  7;
     temp3 -> info = 29;
     temp4 -> info = 30;
     temp5 -> info = 45;
     temp6 -> info = 13;
     temp7 -> info = 67;
     temp8 -> info = 65;

     // head -> link = temp1;
     temp1 -> link = temp2;
     temp2 -> link = temp3;
     temp3 -> link = temp4;
     temp4 -> link = temp5;
     temp5 -> link = temp6;
     temp6 -> link = temp7;
     temp7 -> link = temp8;
     temp8 -> link = NULL;
     head = temp1;
     struct node* temp = head;

   while(temp != NULL){
        printf("%d->",temp->info);
    if(temp->link->link == NULL){
        //cout<<head->info<<"-";
        temp = temp->link;
       printf("%d",temp->info);

    }

    //cout<<tempi->info<<"-";
   temp = temp->link;

   }
return 0;
}


