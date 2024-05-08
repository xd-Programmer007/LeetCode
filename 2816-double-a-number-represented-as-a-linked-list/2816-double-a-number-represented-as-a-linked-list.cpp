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
    ListNode* reverse(ListNode* head){
        if(!head || !head->next)return head;
        ListNode* newHead= reverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return newHead;
    }
    ListNode* doubleIt(ListNode* head) {
        head = reverse(head);
        int c = 0;
        ListNode* ans = new ListNode();
        ListNode* t1 = head, *t2 = ans;
        while(t1){
            int value = t1->val * 2 + c;
            t2->next = new ListNode(value%10);
            t2 = t2->next;
            t1 = t1->next;
            c = value/10;
        }
        if(c)
            t2->next = new ListNode(c);
        head = reverse(head);
        ans = ans->next;
        ans = reverse(ans);
        return ans;
    }
};