#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

// Function to reverse a linked list.
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* current = head;
    
    while (current != NULL) {
        struct ListNode* nextTemp = current->next;
        current->next = prev;
        prev = current;
        current = nextTemp;
    }
    
    return prev;
}

// Function to rearrange the linked list as required.
void reorderList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return;
    }

    // Find the middle of the linked list.
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Split the linked list into two halves.
    struct ListNode* secondHalf = slow->next;
    slow->next = NULL;

    // Reverse the second half of the linked list.
    secondHalf = reverseList(secondHalf);

    // Merge the two halves.
    struct ListNode* current = head;
    while (secondHalf != NULL) {
        struct ListNode* temp1 = current->next;
        struct ListNode* temp2 = secondHalf->next;
        current->next = secondHalf;
        secondHalf->next = temp1;
        current = temp1;
        secondHalf = temp2;
    }
}

// Function to print the linked list.
void printList(struct ListNode* head) {
    struct ListNode* current = head;
    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Example usage:
    struct ListNode* head = malloc(sizeof(struct ListNode));
    head->val = 1;
    head->next = malloc(sizeof(struct ListNode));
    head->next->val = 2;
    head->next->next = malloc(sizeof(struct ListNode));
    head->next->next->val = 3;
    head->next->next->next = malloc(sizeof(struct ListNode));
    head->next->next->next->val = 4;
    head->next->next->next->next = NULL;

    printf("Original Linked List: ");
    printList(head);

    reorderList(head);

    printf("Rearranged Linked List: ");
    printList(head);

    return 0;
}