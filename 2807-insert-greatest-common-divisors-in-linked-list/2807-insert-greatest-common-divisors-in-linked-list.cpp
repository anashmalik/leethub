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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* t=head;
        while(t->next){
            ListNode * temp = new ListNode(__gcd(t->val, t->next->val));
            temp->next=t->next;
            t->next=temp;
            t=t->next->next;
        }
        return head;
    }
};