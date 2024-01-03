/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
struct ListNode* p =list1;
struct ListNode* q=list2;
    struct ListNode* u;
        
        struct ListNode* u1=u;
int i=1;
    while((p!=NULL)&&(q!=NULL)){
        struct ListNode* nn =malloc(sizeof(struct ListNode));
        if(p->val<q->val){
            nn->val=p->val;
            p=p->next;
        }
        else{
            nn->val=q->val;
            q=q->next;
        }
        nn->next=NULL;
        if(i==1){
            u=nn;
            u1=nn;
            i=0;
        }
        else{
            u->next=nn;
            u=u->next;
        }
        
    }
    while(p!=NULL){
        struct ListNode* nn =malloc(sizeof(struct ListNode));
        nn->val=p->val;
         nn->next=NULL;
         if(i==1){
            u=nn;
            u1=nn;
            i=0;
        }
        else{
            u->next=nn;
            u=u->next;
        }
        p=p->next;
        
    }
    while(q!=NULL){
        struct ListNode* nn =malloc(sizeof(struct ListNode));
        nn->val=q->val;
         nn->next=NULL;
         if(i==1){
            u=nn;
            u1=nn;
            i=0;
        }
        else{
            u->next=nn;
            u=u->next;
        }
        q=q->next;
        
    }
    return u1;
}