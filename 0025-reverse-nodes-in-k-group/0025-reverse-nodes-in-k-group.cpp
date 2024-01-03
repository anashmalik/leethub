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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* re= new ListNode;
        ListNode *u =head;
        ListNode *f =re;
        ListNode *ff;
        while(u!=NULL){
            vector<int> t;
            int i;
            for(i=0;i<k;i++){
                if(u==NULL){
                    break;
                }
                else{
                    t.push_back(u->val);
                    u=u->next;
                }
            }
           if(i==k)
           { for(i=t.size()-1;i>=0;i--){
                f->val=t[i];
                ListNode* r= new ListNode;
                f->next =r;
                ff=f;
                f=f->next;


            }}
            else{
                for(i=0;i<t.size();i++){
                f->val=t[i];
                ListNode* r= new ListNode;
                f->next =r;
                ff=f;
                f=f->next;


            }
            }
        }
        ff->next=NULL;
        return re;
    }
};