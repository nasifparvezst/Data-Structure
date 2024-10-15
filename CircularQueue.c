#include<stdio.h>
#define size 6
int Que[size];
int front = -1;
int rear = -1;

int enqueue(int x){
    if((rear+1 == size && front == 0)||(rear+1 == front)){
        printf("Queue is Full.");
        return 0;
    }
    if(rear == -1 && front == -1){
        rear = 0;
        front = 0;
        Que[rear] = x;
    }else{
        if(rear+1 == size){
            rear = 0;
        }
        else{
            rear ++ ;
           Que[rear] = x; 
        }
    }
    return Que[rear] = x;
}
int dequeue()
{
    if((front==-1) && (rear==-1))  
    {
        printf("\nQueue is underflow..");
    }
 else if(front==rear)
{
   printf("\nThe dequeued element is %d", Que[front]);
   front=-1;
   rear=-1;
}
else
{
    printf("\nThe dequeued element is %d", Que[front]);
   if(front+1 == size){
    front = 0;
   }else
     front ++;
}
}
void display (){
    if(rear == -1 && front == -1){
        printf("Queue is Empty.\n");
    }
    else{
        int i = front;
            printf("\nThe Elements are : ");
        while (1){
            printf("%d ",Que[i]);
             if (i == rear) 
                break;
           if (i + 1 == size) {
            i = 0;  // Wrap around to the beginning
        } else {
            i++;
        }
        }
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(30);
    enqueue(30);
    enqueue(100);
   
    display();
    //display();
    dequeue();
    dequeue();

    display();
     enqueue(80);
   enqueue(70);
  display();

 return 0;
}