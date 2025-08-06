#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10

typedef struct {
    int arr[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *stack) {
    stack->top = -1;
}

bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

bool isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(Stack *stack, int value) {
    if (!isFull(stack)) {
        stack->arr[++stack->top] = value;
    } else {
        printf("Stack is full, cannot push %d\n", value);
    }
}

int pop(Stack *stack) {
    if (!isEmpty(stack)) {
        return stack->arr[stack->top--];
    } else {
        printf("Stack is empty, cannot pop\n");
        return -1;
    }
}

int peek(Stack *stack) {
    if (!isEmpty(stack)) {
        return stack->arr[stack->top];
    } else {
        printf("Stack is empty, cannot peek\n");
        return -1;
    }
}

int main() {
    Stack stack;
    initialize(&stack);

    push(&stack, 5);
    push(&stack, 10);
    push(&stack, 15);

    printf("Top element: %d\n", peek(&stack));

    printf("Popped: %d\n", pop(&stack));
    printf("Popped: %d\n", pop(&stack));

    printf("Top element: %d\n", peek(&stack));

    return 0;
}
