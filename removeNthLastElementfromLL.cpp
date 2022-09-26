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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;
        // if(head->next == NULL) return head;
        
        ListNode* prev_node = new ListNode(0);
        prev_node->next = head;
        ListNode* p = prev_node;
        ListNode* q = head;
        
        int len = 0;
        while(q!=NULL)
        {
            q = q->next;
            len++;
        }
        // cout<<"Len:"<<len;
        
        int pos = len - n+1;
        // cout<<"Pos:"<<pos<<endl;
        
        for(int i=1; i<pos; i++)
        {
            // cout<<p->val<<endl;
            p=p->next;
        }
        
        // cout<<p->next->val<<endl;
        p->next = p->next->next;
        
        return prev_node->next;
    }
};
