/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int digits = head->val;
        ListNode* curr = head->next;
        while(curr != nullptr) {
            digits = digits * 2 + curr->val;
            curr = curr->next;
        }
        return digits;
    }
};