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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return head;
        ListNode*temp=head->next;
        ListNode*t=head;
        while(temp){
            if(temp->val==t->val){
                t->next=temp->next;
            }
            else t=temp;
            temp=temp->next;
        }
        return head;
    }
};