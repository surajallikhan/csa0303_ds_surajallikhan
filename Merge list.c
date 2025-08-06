#include <stdio.h>
#include <stdlib.h>

// Define a Node structure for a singly linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of a linked list
struct Node* insertEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
    
    return head;
}

// Function to merge two linked lists
struct Node* mergeLists(struct Node* list1, struct Node* list2) {
    struct Node* mergedList = NULL;
    
    while (list1 != NULL && list2 != NULL) {
        if (list1->data < list2->data) {
            mergedList = insertEnd(mergedList, list1->data);
            list1 = list1->next;
        } else {
            mergedList = insertEnd(mergedList, list2->data);
            list2 = list2->next;
        }
    }
    
    while (list1 != NULL) {
        mergedList = insertEnd(mergedList, list1->data);
        list1 = list1->next;
    }
    
    while (list2 != NULL) {
        mergedList = insertEnd(mergedList, list2->data);
        list2 = list2->next;
    }
    
    return mergedList;
}

// Function to print a linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* list1 = NULL;
    list1 = insertEnd(list1, 1);
    list1 = insertEnd(list1, 3);
    list1 = insertEnd(list1, 5);

    struct Node* list2 = NULL;
    list2 = insertEnd(list2, 2);
    list2 = insertEnd(list2, 4);
    list2 = insertEnd(list2, 6);

    printf("List 1: ");
    printList(list1);

    printf("List 2: ");
    printList(list2);

    struct Node* mergedList = mergeLists(list1, list2);

    printf("Merged List: ");
    printList(mergedList);

    return 0;
}
