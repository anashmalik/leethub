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
    ListNode* partition(ListNode* head, int x) {
        vector<int> ans,t;
        ListNode* temp=head;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]<x){
                t.push_back(ans[i]);
                ans[i]=-2000;
            }
        }
    temp=head;
    for(auto r:t){
        temp->val=r;
        temp=temp->next;
    }
    if(temp)
    for(auto r:ans){
        if(r!=-2000){
             temp->val=r;
        temp=temp->next;
        }
    }
    return head;
    }
};