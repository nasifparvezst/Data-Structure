#include <stdio.h>
#include <stdlib.h>

#define MAX 10  // Define maximum size of the array

int stack[MAX];
int top1 = -1;            // Top for Stack 1
int top2 = MAX;           // Top for Stack 2

// Function to push an element in Stack 1
void push1(int value) {
    if (top1 < top2 - 1) {
        top1++;
        stack[top1] = value;
        printf("Pushed %d into Stack 1\n", value);
    } else {
        printf("Stack Overflow! No space in Stack 1.\n");
    }
}

// Function to push an element in Stack 2
void push2(int value) {
    if (top1 < top2 - 1) {
        top2--;
        stack[top2] = value;
        printf("Pushed %d into Stack 2\n", value);
    } else {
        printf("Stack Overflow! No space in Stack 2.\n");
    }
}

// Function to pop an element from Stack 1
int pop1() {
    if (top1 >= 0) {
        int value = stack[top1];
        top1--;
        return value;
    } else {
        printf("Stack Underflow! Stack 1 is empty.\n");
        return -1;
    }
}

// Function to pop an element from Stack 2
int pop2() {
    if (top2 < MAX) {
        int value = stack[top2];
        top2++;
        return value;
    } else {
        printf("Stack Underflow! Stack 2 is empty.\n");
        return -1;
    }
}

// Function to display the elements of Stack 1
void displayStack1() {
    if (top1 >= 0) {
        printf("Elements in Stack-1 are: ");
        for (int i = 0; i <= top1; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    } else {
        printf("Stack 1 is empty.\n");
    }
}

// Function to display the elements of Stack 2
void displayStack2() {
    if (top2 < MAX) {
        printf("Elements in Stack-2 are: ");
        for (int i = top2; i < MAX; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    } else {
        printf("Stack 2 is empty.\n");
    }
}

int main() {
    // Pushing elements into Stack 1
    push1(10);
    push1(30);
    push1(40);
    push1(50);
    
    // Pushing elements into Stack 2
    push2(20);
    push2(40);
    push2(50);
    push2(60);
    push2(70);
    
    // Display the elements of Stack 1 and Stack 2
    displayStack1();
    displayStack2();
    
    return 0;
}
