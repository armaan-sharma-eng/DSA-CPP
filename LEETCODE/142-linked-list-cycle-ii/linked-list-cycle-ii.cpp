/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        if(head==NULL)
            return NULL;
            
        int x=0;
        ListNode* sp=head;
        ListNode* fp=head;
        
        while(fp!=NULL&&fp->next!=NULL)
        {
            fp=fp->next->next;
            sp=sp->next;

            if(fp==sp)
            {
                x=1;
                break;
            }  
        }
        if (x)
        {
            ListNode* tp=head;
            while(fp!=tp)
            {
                fp=fp->next;
                tp=tp->next;
            }
            return tp;
        }
        return NULL;
    }
};