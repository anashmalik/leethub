# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None:
            return head

        temp = head
        t = head.next
        while t:
            if t.val == temp.val:
                temp.next = t.next
            else:
                temp = t
            t = t.next 
        return head           
