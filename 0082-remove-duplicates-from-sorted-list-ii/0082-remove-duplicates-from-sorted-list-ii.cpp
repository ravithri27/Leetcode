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
        int ele=-101;
        ListNode *prev=head;
        ListNode *temp=head->next;
        while(temp!=nullptr){
            if(prev->val!=temp->val&&ele!=prev->val){
                curr->next=prev;
                curr=curr->next;
            }
            ele=prev->val;
            prev=prev->next;
            temp=temp->next;
        }
        if(ele!=prev->val){
            curr->next=prev;
            curr=curr->next;
        }
        curr->next=nullptr;
        return dummy->next;
    }
};