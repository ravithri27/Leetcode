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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *i=head;
        if(head==nullptr){
            return head;
        }
        ListNode *j=head->next;
        ListNode *join=head->next;
        while(i->next!=nullptr&&j->next!=nullptr){
            i->next=i->next->next;
            i=i->next;
            j->next=j->next->next;
            j=j->next;
        }
        i->next=join;
        return head;
    }
};