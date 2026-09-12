/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* i=head;
        ListNode* j=head;
        while(j!=nullptr&&j->next!=nullptr){
            i=i->next;
            j=j->next->next;
            if(i==j){
                ListNode* temp=head;
                while(temp!=i){
                    temp=temp->next;
                    i=i->next;
                }
                return temp;
            }
        }
        return nullptr;
    }                                   
};