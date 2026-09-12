class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(char ch : s) {
        if(isalnum(ch))
            ans += ch;
        }
        int i=0,j=ans.length()-1;
        while(i<j){
            if(tolower(ans[i])==tolower(ans[j])){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};