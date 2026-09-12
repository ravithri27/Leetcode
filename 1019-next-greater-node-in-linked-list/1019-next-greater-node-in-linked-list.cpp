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
ListNode* reverseList(ListNode *head){
        ListNode *prev=nullptr;
        ListNode *curr=head;
        while(curr!=nullptr){
            ListNode *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        head=reverseList(head);
        stack<int> st;
        ListNode *temp=head;
        while(temp!=nullptr){
            if(st.empty()){
                ans.push_back(0);
                st.push(temp->val);
                temp=temp->next;
            }else if(temp->val<st.top()){
                ans.push_back(st.top());
                st.push(temp->val);
                temp=temp->next;
            }else{
                st.pop();
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};