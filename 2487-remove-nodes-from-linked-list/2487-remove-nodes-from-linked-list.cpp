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
        ListNode* nxtHead = reverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return nxtHead;
    }
    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);
        ListNode* tmp = head;
        int maxi = 0;
        while(tmp->next){
            maxi = max(maxi , tmp->val);
            if(tmp->next->val < maxi)
                    tmp->next = tmp->next->next;
            else
                tmp = tmp->next;
        }
        return reverse(head);
    }
};