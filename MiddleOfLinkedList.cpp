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
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr;
        ptr= head;
        int c =1;
        while(ptr->next!=NULL)
        {
            c++;
            ptr=ptr->next;
        }
        cout<<c<<endl;
        c/=2;
        ptr=head;
        while(c>0)
        {  c--;
            ptr=ptr->next;
        }
        return ptr;    

    }
};