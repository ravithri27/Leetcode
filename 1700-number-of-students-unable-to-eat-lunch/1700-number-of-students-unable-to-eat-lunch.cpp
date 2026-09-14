class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(auto x:students){
            q.push(x);
        }
        int i=0;
        int count=0;
        while(i<sandwiches.size()){
            if(q.front()==sandwiches[i]){
                q.pop();
                i++;
                count=0;
            }else{
                int x=q.front();
                q.pop();
                q.push(x);
                count++;
                int k=0;
                if(count==q.size()){
                    break;
                }
            }
        }
        return q.size();
    }
};