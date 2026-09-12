class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> p;
        int i=0,j=s.length();
        for(int k=0;k<s.length()&&i<j;k++){
            if(s[k]=='I'){
                p.push_back(i);
                i++;
            }else{
                p.push_back(j);
                j--;
            }
        }
        p.push_back(i);
        return p;
    }
};