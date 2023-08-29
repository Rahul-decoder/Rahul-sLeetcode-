//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
       Node *pre=NULL,*ptr=head,*ptr1=head;
       while(ptr1!=NULL)
       {
           ptr1=ptr1->next;
           ptr->next=pre;
           pre=ptr;
           ptr=ptr1;
       }
       ptr=pre;
       ptr1=pre;
       while(ptr!=NULL)
       {
           ptr=ptr->next;
           if(ptr==NULL)
           break;
           if(ptr->data>=ptr1->data)
           {
               ptr1->next=ptr;
               ptr1=ptr;
           }
       }
       ptr1->next=NULL;
       ptr=pre;
       ptr1=pre;
       pre=NULL;
       while(ptr1!=NULL)
       {
           ptr1=ptr1->next;
           ptr->next=pre;
           pre=ptr;
           ptr=ptr1;
       }
       return pre;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends