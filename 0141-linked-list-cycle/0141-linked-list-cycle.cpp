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
    bool hasCycle(ListNode *head) {
        ListNode *i=head;
        ListNode *j=head;
        while(i!=nullptr&&i->next!=nullptr){
            j=j->next;
            i=i->next->next;
            if(i==j){
                return true;
            }
        }
        return false;
    }
};