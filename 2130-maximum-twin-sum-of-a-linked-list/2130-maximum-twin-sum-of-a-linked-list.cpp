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
    int pairSum(ListNode* head) {
        ListNode *tem=head;
        int n=0;
        while(tem!=nullptr){
            tem=tem->next;
            n++;
        }
        ListNode *prev=head;
        for(int i=0;i<n/2;i++){
            prev=prev->next;
        }
        ListNode *curr=prev->next;
        prev->next=nullptr;
        while(curr!=nullptr){
            ListNode *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        ListNode *front=head;
        ListNode *back=prev;
        int i=0,j=0;
        int max=0;
        while(back!=nullptr){
            int sum=front->val+back->val;
            if(sum>max){
                max=sum;
            }
            front=front->next;
            back=back->next;
        }
        return max;
    }
};