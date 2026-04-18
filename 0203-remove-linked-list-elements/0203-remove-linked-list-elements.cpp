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
    ListNode* removeElements(ListNode* head, int val) 
    {
        while(head!=NULL&&head->val==val)
            head=head->next;

        if(head==NULL)
            return NULL;

        ListNode* ptr=head->next;
        ListNode* prev=head;
        while(ptr!=NULL)
        {
            if(ptr->val==val)
            {
                prev->next=ptr->next;
                ptr=ptr->next;
                continue;
            }
            ptr=ptr->next;
            prev=prev->next;
        }
        return head;        
    }
};