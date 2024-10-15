#include<stdio.h>
//#include<stdlib.h>
#define size 3
int arr[size];
int top = -1;
  void push(){
    int x;
    if(top == size -1){
    printf("\nStack Overflow.");
    return;
    }
   else{
       printf("\nPush the element in stack :");
       scanf("%d",&x);
       top = top + 1;
         arr[top] = x;     
   }
  }
   void pop(){
    if(top == -1){
          printf("\nStack Unerflow.");
          return ;
    }
    else{
        printf("\nPoped element %d in the stack.",arr[top]);
        top = top-1;
     
    }

   }
   int peek(){
    if(top == -1){
        printf("\nUnderflow");
       return -1;
    }
    else{
    return printf("\nTop of the array is : %d ",arr[top]);
    }
   }
   void show(){
    int i =0;
    while(i <= top){    
       printf("%d ",arr[i]);
        i++;      
    }
   }
   int isEmpty(){
    if(top == -1)
    return 1;
    else return 0;
   }

int main (){
  int choice;
  while(1){
    printf("\nEnter your choice case :");
    scanf("%d",&choice);
    switch(choice){
        case 1: push();
        break;
        case 2:pop();
        break;
        case 3:peek();
        break;
        case 4:
       if(top == -1){
       printf("There are no elements in Array now.");
       show();
        }
        else{
         printf("The Elements are : ");
            show();
        }
        break;
        case 5: printf("Out of the switch,");
         return 0;
        break;
        default :
        printf("\n\n\nInvailed choice");
    }
  }

    return 0;
}