#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertAfter(struct Node* prevNode, int data) {
    if (prevNode == NULL) {
        return;
    }
    
    struct Node* newNode = createNode(data);
    
    newNode->next = prevNode->next;
    if (prevNode->next != NULL) {
        prevNode->next->prev = newNode;
    }
    
    prevNode->next = newNode;
    newNode->prev = prevNode;
}

void printList(struct Node* head) {
    struct Node* current = head;
    
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = createNode(1);
    insertAfter(head, 2);
    insertAfter(head->next, 3);
    insertAfter(head->next->next, 4);
    
    printf("Doubly-linked list: ");
    printList(head);
    
    return 0;
}
