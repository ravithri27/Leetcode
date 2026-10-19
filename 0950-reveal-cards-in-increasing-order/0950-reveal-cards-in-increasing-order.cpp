class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int> q;
        int n=deck.size();
        vector<int> order;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        while(!q.empty()){
            order.push_back(q.front());
            q.pop();
            if(q.empty()){
                break;
            }else{
                q.push(q.front());
                q.pop();
            }
        }
        sort(deck.begin(),deck.end());
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[order[i]]=deck[i];
        }
        return ans;
    }
};