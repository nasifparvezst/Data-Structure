#include<stdio.h>        //[FIRST IN FIRST OUT]FIFO
#define size 4
int front = -1,rear = -1,count = 1;
int queue[size];

 void enqueue(int value);
 void dequeue();
 void show();

int main(){
    
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(15);

   dequeue();
   dequeue();
   //dequeue();
   show(); 
    enqueue(15);
    show();


  if(front == rear){
    return 0;
  }
  else{
   int sum = 0;
   int i = 0;
   while (i < count){
    sum = sum + queue[i];
    i++;
   }
  //printf("\nsum of present elements : %d",sum);
  }
    return 0;
}
//adding value
void enqueue(int value){
  if(rear == size -1){
    printf("\nOverflow.\n");
  }
  else{
    printf("\nAdded elements in Queue : %d",value);
    if (front == -1){
            front = 0;
    }
    rear = rear + 1;
    queue[rear] = value;
  }
}
void dequeue(){
    if(front == -1 || front > rear){
        printf("\nUnderflow.");
    }
    else{
        printf("\nDeleted the value %d in queue.",queue[front]);
        front = front + 1;
        
    }
}
    void show(){
        if(front == -1 || front > rear){
        printf("\n\nNO elements has this queue.");
    }
    else{
       
        printf("\n\nThe elements are :");
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
            count ++;
          
        }
        printf("\n");
    }

    }