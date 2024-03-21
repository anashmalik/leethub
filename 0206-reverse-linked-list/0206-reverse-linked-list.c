/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* p= head;
    if(p==NULL){
        return p;
    }
    int arr[5000],a=0;
 while(p->next!=NULL){
       arr[a]=p->val;
        p=p->next;
     a++;
    } 
     arr[a]=p->val;
    int i=0;
    p=head;
 while(p->next!=NULL){
        p->val=arr[a-i];
        p=p->next;
     i++;
    }
     p->val=arr[0];
    return head;
}