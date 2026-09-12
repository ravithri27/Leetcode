class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int ans=0,cnt=0;
        int n=colors.size();
        for(int i=0;i<n;i++){
            int curr=i;
            int prev=(i-1+n)%n;
            int next=(i+1)%n;
            if(colors[prev]!=colors[curr]&&colors[curr]!=colors[next]){
                cnt++;
            }
        }
        return cnt;
    }
};