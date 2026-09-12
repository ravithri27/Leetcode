class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(k>0){
                int sum=0;
                for(int j=i;j<i+k;j++){
                    int next=(j+1)%n;
                    sum+=code[next];
                }
                ans.push_back(sum);
            }else if(k<0){
                int sum1=0;
                for(int j=1;j<=-k;j++){
                    int prev=(i-j+n)%n;
                    sum1+=code[prev];
                }
                ans.push_back(sum1);
            }else{
                ans.push_back(0);
            }
        }
        return ans;
    }
};