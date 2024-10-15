
#include<stdio.h>
#define size 3
int stack[size];
int top = -1;
int x;
void push(){
    if(top == size-1){
        printf("The stack is Full.\n");
     return;
    }
    else{
        printf("\nPush the elements  onto the stack : ");
    scanf("%d",&x);
    
    top = top + 1;
    stack[top] = x;        
    }    
}
 void pop(){
    if(top == -1){
          printf("The stack has Underflow.\n");
          return ;
    }
    else{
       // int x = stack[top];
    printf("\nPop the elements %d onto the stack.",stack[top]);
        top= top -1;;
        
    }
  }
  void display(){
  int i=0;
  //printf("The elements are : ");
  while(i <= top){
    printf("%d ",stack[i]);
    i++;
  }
  }
  void check(){
    if(top == size-1)
    printf("stack is full.");
  else
   printf("stack is not full.");
  }

int main(){
 int choice;
 while(1){
    printf("\nEnter your choice case : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
    push();
      break;
    case 2://printf("\nPop the elements %d onto the stack.",stack[top]);
           pop();
       break;
     case 3:
     if(top == -1){
        printf("There are no elements on stack.");
        display();
     }
     else{
      printf("The elements are : ");
        display(); 
     }   
     break;
     case 4:check();
     break;
     case 5:return 0;  
     break;
     default:printf("\nYou choice Invailed case.Try again.");
    }
 }


return 0;
}