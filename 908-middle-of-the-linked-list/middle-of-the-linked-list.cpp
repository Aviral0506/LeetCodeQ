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
    int length(ListNode* head) {
        int count = 0;
        ListNode* curr = head;
        while(curr != nullptr) {
            curr = curr->next;
            count++;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        int len = length(head)/2;
        ListNode* curr = head;
            while(count < len) {
                count++;
                curr=curr->next;
            }
        return curr;
    }
};