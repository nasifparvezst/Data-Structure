#include<iostream>
#include<string.h>
using namespace std;
#define size 30
char stack[size];
int top = top -1;

 void push(char c){
   if(top == size-1){
    cout<<"stack Overflow.\n";
   }
   else{
   // top = top + 1;
    stack[++top] = c;
   }
 }
 int pop(){
  if(top == -1){
    cout<<"Stack Underflow.\n";
    return 1;
  }
  else
     //top = top -1;
    return stack[top--];

 }
 void show(char str[]){
    int i=0;
     int n = strlen(str);
    while(i <= n){
        push(str[i]);
        i++;
    }
        for(i=0;i<n;i++){
            str[i] = pop();
        }
 }

int main(){
    char str[size];
     cout<<"Enter a string :";
     gets(str);
     int n = strlen(str);
       
     show(str);
      //for(int i=0;i<n;i++){
          
        cout<<"Reverse string is :"<<str;
     // }

    return 0;
}