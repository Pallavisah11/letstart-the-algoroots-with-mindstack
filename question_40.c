#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to detect loop
int detectLoop(struct Node* head) {
    struct Node *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          // move 1 step
        fast = fast->next->next;    // move 2 steps

        if (slow == fast) {
            return 1;   // Loop detected (true)
        }
    }
    return 0;           // No loop (false)
}

// Helper function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Creating linked list: 3 -> 2 -> 0 -> -4
    struct Node* head = createNode(3);
    struct Node* second = createNode(2);
    struct Node* third = createNode(0);
    struct Node* fourth = createNode(-4);

    head->next = second;
    second->next = third;
    third->next = fourth;

    // Creating cycle: tail connects to node with value 2
    fourth->next = second;

    if (detectLoop(head))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}