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
    ListNode* removeNodes(ListNode* head) {
        vector<int>a;
        ListNode* t=head;
        while(t){
            a.push_back(t->val);
            t=t->next;
        }
        int m=-1;
        for(int i=a.size()-1;i>=0;i--){
            m=max(m,a[i]);
            if(a[i]<m){
                a[i]=-1;
            }

        }
        t=head;
        ListNode* l=head;
        for(auto x:a){
            if(x!=-1){
            t->val=x;
            l=t;
            t=t->next;}
        }
        l->next=NULL;
        return head;
    }
};