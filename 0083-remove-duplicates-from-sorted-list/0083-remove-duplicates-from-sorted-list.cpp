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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode *dummy=new ListNode(0);
        ListNode *curr=dummy;
        ListNode *prev=head;
        ListNode *temp=prev->next;
        int ele=head->val;
        while(temp!=nullptr){
            if(temp->val!=prev->val||prev->val!=ele){
                curr->next=prev;
                curr=curr->next;
                prev=prev->next;
                temp=prev->next;
                ele=prev->val;
            }else{
                ele=temp->val;
                prev=prev->next;
                temp=prev->next;
            }
        }
        if(prev->val==ele){
            curr->next=prev;
        }
        return dummy->next;
    }
};