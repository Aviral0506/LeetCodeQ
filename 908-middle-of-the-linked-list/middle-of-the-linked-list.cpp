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
        ListNode* curr = head;
        int cnt = 0;
        while(head != nullptr) {
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        int len = length(head)/2;
        int cnt = 0;
        ListNode* temp = head;
        while(cnt < len) {
            cnt++;
            temp=temp->next;
        }
        return temp;
    }
};