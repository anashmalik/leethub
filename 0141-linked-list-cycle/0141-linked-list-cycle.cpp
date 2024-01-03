/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> ans;
        while(head){
            int t=ans.size();
            ans.insert(head);
            if(t==ans.size())return true;
            head=head->next;
        }
        return false;
    }
};