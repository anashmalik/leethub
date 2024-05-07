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
int t=0;
    ListNode* doubleIt(ListNode* head) {
        help(head);
        if(t)return new ListNode(1,head);
        return head;
    }
    void help(ListNode* head){
        if(!head)return ;
        help(head->next);
        head->val=head->val*2+t;
        t=head->val/10;
        head->val=head->val%10;
    }
};