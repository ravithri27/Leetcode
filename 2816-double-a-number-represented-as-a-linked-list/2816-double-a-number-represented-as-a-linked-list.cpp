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
    ListNode* doubleIt(ListNode* head) {
        if(head->next==nullptr){
            if(head->val*2<10){
                head->val=head->val*2;
                return head; 
            }   
        }
        stack<int> st;
        ListNode* temp=head;
        while(temp!=nullptr){
            int d=temp->val*2;
            if(d<10){
                st.push(d);
            }else if(!st.empty()&&d>=10){
                st.top()+=1;
                st.push(d%10);
            }else if(st.empty()&&d>=10){
                st.push(d/10);
                st.push(d%10);
            }
            temp=temp->next;
        }
        ListNode* head1=nullptr;
        while(!st.empty()){
            ListNode* newnode=new ListNode(st.top());
            newnode->next=head1;
            head1=newnode;
            st.pop();
        }
        return head1;
    }
};