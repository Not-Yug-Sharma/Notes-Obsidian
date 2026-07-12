#include<stdio.h>

int stack[100];
int top=0;

void push(int value) {
    if (top >= 100) {
        printf("Stack overflow\n");
        return;
    }
    stack[top++] = value;
}

int pop() {
    if (top <= 0) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[--top];
}
void isEmpty() {
    if (top <= 0) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }
}

int peek() {
    if (top <= 0) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top-1];
}

int main() {
    int choice, value;
    while (1) {
        printf("1. Push\n2. Pop\n3. Peek\n4. Is Empty\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                value = pop();
                if (value != -1) printf("Popped value: %d\n", value);
                break;
            case 3:
                value = peek();
                if (value != -1) printf("Top value: %d\n", value);
                break;
            case 4:
                isEmpty();
                break;
                
            default:
                return 0;
        }
    }
    
    return 0;
}