class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        while(true){
            for(int i=0;i<k-1;i++){
                q.push(q.front());
                q.pop();
            }
            if(q.size()==1){
                break;
            }else{
                q.pop();
            }
        }
        return q.front();
    }
};