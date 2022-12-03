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
    ListNode* removeNodes(ListNode* head) {
        ListNode *ptr=head;
        int maxi=INT_MIN;
        while(ptr!=NULL)
        {
            maxi=max(maxi,ptr->val);
            if(ptr!=NULL&&ptr->next!=NULL)
            {
                if(ptr->val<ptr->next->val)
                {
                    ptr->val=ptr->next->val;
                    ptr->next=ptr->next->next;
                    ptr=head;
                }
                else
                ptr=ptr->next;
                 if(ptr->next!=NULL&&ptr->next->val>maxi)
                    head=ptr;
            }
            else
            {
                 if(ptr->next!=NULL&&ptr->next->val>maxi)
                    head=ptr;
                break;
            }
            
        }
        return head;
    }
};