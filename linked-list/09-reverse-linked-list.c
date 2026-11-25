#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;

    while (curr != NULL) {
        struct ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

int main() {
    // Test Case 1 (Typical: 1 -> 2 -> 3)
    struct ListNode n3 = {3, NULL};
    struct ListNode n2 = {2, &n3};
    struct ListNode n1 = {1, &n2};
    struct ListNode* rev1 = reverseList(&n1);
    printf("Typical: %d -> %d -> %d (Expected: 3 -> 2 -> 1)\n",
           rev1->val, rev1->next->val, rev1->next->next->val);

    // Test Case 2 (Edge: empty list NULL)
    struct ListNode* rev2 = reverseList(NULL);
    printf("Edge: %s (Expected: NULL)\n", rev2 == NULL ? "NULL" : "NOT NULL");

    return 0;
}