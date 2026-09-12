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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *temp=dummy;
        while(temp->next!=nullptr&&temp->next->next!=nullptr){
            ListNode *p1=temp->next;
            ListNode *p2=p1->next;
            p1->next=p2->next;
            p2->next=p1;
            temp->next=p2;
            temp=p1;
        }
        head=dummy->next;
        return head;
    }
};