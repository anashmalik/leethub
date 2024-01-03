/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* p= head;
    int i=0;
    if(head->next==NULL){
        head=NULL;
        return head;
    }
    while(p->next!=NULL){
        i++;
        p=p->next;
    }
     //   printf("%d  %d",i,n);

    i=i-n;
  //  printf("%d  %d",i,n);
     p= head;
    if(i==-1){
        head=head->next;
    }
   else{ while(i){
        p=p->next;
        i--;
    }
    p->next=p->next->next;
    
    }
    return head;
    
}