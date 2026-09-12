class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++){
            int score=0;
            for(int j=i+1;j<n+i;j++){
                if(s[(j-1)%n]==s[j%n]){
                    score++;
                }
            }
            if(score==k){
                ans++;
            }
        }
        return ans;
    }                                    
};