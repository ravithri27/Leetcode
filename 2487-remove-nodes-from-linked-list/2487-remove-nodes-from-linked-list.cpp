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
    ListNode* removeNodes(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        stack<int> st;
        ListNode *temp=head;
        while(temp!=nullptr){
            if(st.empty()){
                st.push(temp->val);
                temp=temp->next;
            }else if(temp->val>st.top()){
                st.pop();
            }else{
                st.push(temp->val);
                temp=temp->next;
            }
        }
        ListNode *head1=nullptr;
        while(!(st.empty())){
            ListNode *newnode=new ListNode(st.top());
            if(head1==nullptr){
                head1=newnode;
            }else{
                newnode->next=head1;
                head1=newnode;
            }
            st.pop();
        }
        return head1;
    }
};