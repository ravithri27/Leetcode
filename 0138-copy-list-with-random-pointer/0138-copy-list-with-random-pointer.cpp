/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       vector<Node*> hashmap;
       Node *temp=head;
       Node *head1=nullptr;
       Node *tail=nullptr;
       int cnt=0;
       while(temp!=nullptr){
            cnt++;
            Node *nn=new Node(temp->val);
            hashmap.push_back(nn);
            if(head1==nullptr){
                head1=tail=nn;
            }else{
                tail->next=nn;
                tail=nn;
            }
            temp=temp->next;
       }
       temp=head;
       Node *temp1=head1;
       while(temp1!=nullptr&&temp!=nullptr){
            if(temp->random==nullptr){
                temp1->random=nullptr;
            }else{
                Node* search = head;
                int index = 0;
                while (search != temp->random) {
                    search = search->next;
                    index++;
                }
                temp1->random = hashmap[index];
            }
            temp1=temp1->next;
            temp=temp->next;
       }
       return head1;
    }
};