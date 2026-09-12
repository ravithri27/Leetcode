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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr&&head->next==nullptr){
            return head;
        }
        ListNode *length=head;
        int len=0;
        while(length!=nullptr){
            len++;
            length=length->next;
        }
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *temp=dummy;
        int cnt=len/k;
        for(int j=0;j<cnt;j++){
            int i=0;
            ListNode* prev=temp;
            ListNode *curr=prev->next;
            while(i<k&&curr!=nullptr){
                ListNode *nex=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nex;
                i++;
            }
            temp->next->next=curr;
            ListNode* add=temp->next;
            temp->next=prev;
            temp=add;
        }
        head=dummy->next;
        return head;
    }
};