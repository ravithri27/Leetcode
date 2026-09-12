class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        if(strs.size()==1){
            return ans;
        }
        for(int k=1;k<strs.size();k++){
            string finalans="";
            int i=0,j=0;
            while(i<ans.size()&&j<strs[k].size()){
                if(ans[i]==strs[k][j]){
                    finalans+=ans[i];
                    i++;
                    j++;
                }else{
                    break;
                }
            }
            ans=finalans;
            if(ans.empty()){
                return "";
            }
        }
        return ans;
    }
};