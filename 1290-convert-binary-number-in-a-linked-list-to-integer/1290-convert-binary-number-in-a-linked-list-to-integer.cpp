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
    int getDecimalValue(ListNode* head) {
        int len=0;
        ListNode *temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        int ans=0;
        int i=len-1;
        ListNode *temp1=head;
        while(i>=0&&temp1!=NULL){
            int value=temp1->val;
            ans+=value*pow(2,i);
            i--;
            temp1=temp1->next;
        }
        return ans;
    }
};