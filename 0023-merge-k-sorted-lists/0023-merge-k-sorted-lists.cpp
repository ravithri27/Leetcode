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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return nullptr;
        }
        ListNode *result=lists[0];
        for(int i=1;i<lists.size();i++){
            result=merge(result,lists[i]);
        }
        return result;
    }
    ListNode* merge(ListNode* list1, ListNode* list2) {
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
};