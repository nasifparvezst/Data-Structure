#include<iostream>
using namespace std;
class Node {
public:
    int data;
    struct Node *next;
}*head;
void traverse(struct Node *head) {
    struct Node *go = head->next;
    cout<<head->data<<"->";
    while(go!=head) {
        cout<<go->data<<"->";
        go = go -> next;
    }
    cout<<"Head"<<endl ;
}
struct Node* InsertBefore(struct Node *head){
 struct Node *newNode = new Node();
 newNode->data = 5;
  struct Node *go = head;
  while(go->next!=head){
      go = go->next;
  }
  go->next = newNode;
  newNode->next = head;
  head = newNode;
 
 return head;
}
struct Node* deleteFirst(struct Node *head){
struct Node *go = head;
   while(go->next!=head){
      go = go->next;
  }
  go->next = head->next;
  free(head);
  head = go->next;
  return head;
  
}
struct Node* deleteEnd(struct Node *head){
struct Node *go = head;
   while(go->next->next!=head){
      go = go->next;
  }
  free(go->next);
  go->next = head;
  return head;
}


int main()
{
    struct Node *one,*two,*three;
     one = new Node();
    two = new Node();
    three = new Node();
    one->data = 10;
    two->data = 20;
    three->data = 30;

    one->next = two;
    two->next = three;
    three->next = one;
    head = one;

 cout<<"Before Insert The Elements : ";
    traverse(head);
   cout<<"After Insert First The Elements : ";
    head = InsertBefore(head);
    traverse(head);
  cout<<"After Delete First The Elements : ";
   head = deleteFirst(head);
   traverse(head);
   cout<<"After Delete End Elements :";
   deleteEnd(head);
   traverse(head);
    return 0;
}