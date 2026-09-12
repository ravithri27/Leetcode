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
    ListNode* insertionSortList(ListNode* head) {
        if(head==nullptr||head->next==nullptr){ 
            return head;
        }
        vector<int> arr;
        for(ListNode* temp=head;temp!=nullptr;temp=temp->next){
            arr.push_back(temp->val);
        }
        int n=arr.size();
        sort(arr.begin(),arr.end());
        ListNode *dummy=new ListNode(0);
        ListNode *temp=dummy;
        for(int i=0;i<n;i++){
            ListNode *newnode=new ListNode(arr[i]);
            temp->next=newnode;
            temp=temp->next;
        }
        temp->next=nullptr;
        return dummy->next;
    }
};