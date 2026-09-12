class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();
        if(n==1){
            return s;
        }
        int p=n/2;
        sort(s.begin(),s.begin()+p);
        int i=0,j=n-1;
        while(i<j){
            s[j]=s[i];
            i++;
            j--;
        }
        return s;
    }
};