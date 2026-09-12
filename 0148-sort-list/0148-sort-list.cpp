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
    ListNode* merge(ListNode *list1,ListNode* list2){
        ListNode *dummy=new ListNode(0);
        ListNode *curr=dummy;
        while(list1!=nullptr&&list2!=nullptr){
            if(list1->val<=list2->val){
                curr->next=list1;
                curr=curr->next;
                list1=list1->next;
            }else{
                curr->next=list2;
                curr=curr->next;
                list2=list2->next;
            }
        }
        while(list1!=nullptr){
            curr->next=list1;
            curr=curr->next;
            list1=list1->next;
        }
        while(list2!=nullptr){
            curr->next=list2;
            curr=curr->next;
            list2=list2->next;
        }
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode *slow=head;
        ListNode *fast=head->next;
        while(fast!=nullptr&&fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode *second=slow->next;
        slow->next=nullptr;
        ListNode *left=sortList(head);
        ListNode *right=sortList(second);
        return merge(left,right);
    }
};