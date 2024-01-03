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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t= new ListNode();
        ListNode* o=t;
        t->val=0;
        int u=0;
        while((l1!=NULL)&&(l2!=NULL)){
            int w=l1->val + l2->val +u;
            ListNode* y= new ListNode();
            y->val=w%10;
            o->next=y;
            o=o->next;
            u=w/10;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
             int w=l1->val +u;
            ListNode* y= new ListNode();
            y->val=w%10;
            o->next=y;
            o=o->next;
            u=w/10;
            l1=l1->next;
        }
        while(l2!=NULL){
             int w=l2->val +u;
            ListNode* y= new ListNode();
            y->val=w%10;
            o->next=y;
            o=o->next;
            u=w/10;
            l2=l2->next;
        }
        if(u>0){
            ListNode* y= new ListNode();
            y->val=u%10;
            o->next=y;
            
        }
       return t->next; 
    }
};