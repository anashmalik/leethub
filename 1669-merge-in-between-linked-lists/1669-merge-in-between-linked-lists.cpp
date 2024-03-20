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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* te=list1;
        ListNode* t=list1;
        b-=a-1;
        while(a--){
            t=te;
            te=te->next;
        }
        t->next=list2;
        while(b--){
            te=te->next;
        }
        t=list2;
        while(t->next){
            t=t->next;
        }
        t->next=te;

        return list1;
    }
};