#include<stdio.h>
#include<stdlib.h>
int main(){
struct node{
int data;
struct node* next;
};
struct node*head,*a,*b,*c,*d,*e,*f,*g,*h;
a=malloc(sizeof(struct node));
b=malloc(sizeof(struct node));
c=malloc(sizeof(struct node));
d=malloc(sizeof(struct node));
e=malloc(sizeof(struct node));
f=malloc(sizeof(struct node));
g=malloc(sizeof(struct node));
h=malloc(sizeof(struct node));
a->data=57;
b->data=7;
c->data=29;
d->data=30;
e->data=45;
f->data=13;
g->data=67;
h->data=65;
a->next=b;
b->next=c;
c->next=d;
d->next=e;
e->next=f;
f->next=g;
g->next=h;
h->next=NULL;
head=a;
struct node* temp=head;
printf("The numbers are:\n");
while(temp!=NULL){
    printf("%d -> ",temp->data);
    if(temp->next->next==NULL){
        temp=temp->next;
        printf("%d\n",temp->data);
    }
    temp=temp->next;
}

return 0;
}

