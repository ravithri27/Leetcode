class Solution {
public:
    int max(int a,int b){
        if(a>b){
            return a;
        }
        return b;
    }
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> str;
        int l=0,r=0,maxlen=0;
        while(r<s.length()){
            while(str.count(s[r])){
                str.erase(s[l]);
                l++;
            }
            str.insert(s[r]);
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};