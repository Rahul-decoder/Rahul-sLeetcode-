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
    void reorderList(ListNode* head) {
        ListNode *ptr=head,*ptr1=head->next;
        while(ptr1!=NULL&&ptr1->next!=NULL)
        {
            ptr=ptr->next;
            ptr1=ptr1->next->next;
        }
        ListNode *List1=head,*List2=ptr->next,*dumy=NULL,*ptr2;
        ptr->next=NULL;
        while(List2)
        {
            ptr2=List2->next;
            List2->next=dumy;
            dumy=List2;
            List2=ptr2;
        }
        ListNode *r=List1;
        List1=List1->next;
        while(List1!=NULL&&dumy!=NULL)
        {
            r->next=dumy;
            r=r->next;
            dumy=dumy->next;
            r->next=List1;
            r=r->next;
            List1=List1->next;
        }
        if(List1!=NULL)
            r->next=List1;
        if(dumy!=NULL)
            r->next=dumy;
    }
};