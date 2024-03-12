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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* temp=head;
        stack<ListNode*>s;
        // s.push(NULL);
        while(temp){
            int ans=temp->val;
             stack<ListNode*>b;
            while(ans!=0 and s.size()>=1){
                ans+=s.top()->val;
                b.push(s.top());
                s.pop();
            }
            if(s.size()==0 and ans==0) head=temp->next;
            else if(ans==0 ){
                s.top()->next=temp->next;
            }
            else{
                while(b.size()){
                    s.push(b.top());
                    b.pop();
                }
                s.push(temp);
            }
            temp=temp->next;
        }   
        return head;
    }
};