#include <stdio.h>
#include <stdlib.h>

#define MAX 10  // Define the maximum size of the stack

int stack[MAX];
int top = -1;

// Function to push an element onto the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed onto the stack.\n", value);
    }
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop an element.\n");
        return -1;
    } else {
        int value = stack[top];
        top--;
        printf("%d popped from the stack.\n", value);
        return value;
    }
}

// Function to peek the top element of the stack
int peek() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return -1;
    } else {
        return stack[top];
    }
}

// Function to display the stack elements
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                value = peek();
                if (value != -1) {
                    printf("Top element is %d\n", value);
                }
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}







// Stack Operations Menu:
// 1. Push
// 2. Pop`
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 1
// Enter the value to push: 10
// 10 pushed onto the stack.

// Stack Operations Menu:
// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 1
// Enter the value to push: 20
// 20 pushed onto the stack.

// Stack Operations Menu:
// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 4
// Stack elements:
// 20
// 10

// Stack Operations Menu:
// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 3
// Top element is 20

// Stack Operations Menu:
// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 2
// 20 popped from the stack.

// Stack Operations Menu:
// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 2
// 10 popped from the stack.

// Stack Operations Menu:
// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 4
// Stack is empty.

// Stack Operations Menu:
// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 5. Exit
// Enter your choice: 5
