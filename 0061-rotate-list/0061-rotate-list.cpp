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
    ListNode* rotateRight(ListNode* head, int k) {
        int len=0;
        for(ListNode *temp=head;temp!=nullptr;temp=temp->next){
            len++;
        }
        if(len==0||k==0){
            return head;
        }
        k=k%len;
        int n=len-k;
        ListNode *prev=head;
        for(int i=1;i<n;i++){
            prev=prev->next;
        }
        ListNode *dummy=new ListNode(0);
        dummy->next=prev->next;
        prev->next=nullptr;
        ListNode *temp=dummy;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=head;
        return dummy->next;
    }
};