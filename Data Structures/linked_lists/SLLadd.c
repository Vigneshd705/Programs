#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummy_head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* current = dummy_head;
    int carry = 0;

    while (l1 || l2) {
        int x = (l1 != NULL) ? l1->val : 0;
        int y = (l2 != NULL) ? l2->val : 0;
        int sum = carry + x + y;
        carry = sum / 10;

        current->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        current = current->next;
        current->val = sum % 10;
        current->next = NULL;

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }

    if (carry > 0) {
        current->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        current = current->next;
        current->val = carry;
        current->next = NULL;
    }

    struct ListNode* result = dummy_head->next;
    free(dummy_head);
    return result;
}