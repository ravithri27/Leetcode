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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp1=l1;
        ListNode *temp2=l2;
        ListNode *head=nullptr;
        ListNode *tail=nullptr;
        int carry=0;
        while(temp1!=nullptr||temp2!=nullptr){
            int sum=carry;
            if(temp1!=nullptr){
                sum+=temp1->val;
                temp1=temp1->next;
            }
            if(temp2!=nullptr){
                sum+=temp2->val;
                temp2=temp2->next;
            }
            ListNode *num=new ListNode(sum%10);
            carry=sum/10;
            if(head==nullptr){
                head=tail=num;
            }else{
                tail->next=num;
                tail=num;
            }
        }
        if(carry==1){
            ListNode *newnode=new ListNode(1);
            tail->next=newnode;
            tail=newnode;
        }
        return head;
    }
};