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
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(head->next==NULL)
            return NULL;
            
        ListNode* sp=head;
        ListNode* fp=head;
        ListNode* prev=head;

        while(fp!=NULL && fp->next!=NULL)
        {
            fp=fp->next->next;
            prev=sp;
            sp=sp->next;
        }

        prev->next=sp->next;
        cout<<sp->val;
        return head;
    }
};