class Solution {
public:
    string reverseVowels(string s) {
    int i=0,j=s.length()-1;
    string st=s;
        while(i<j){
            while(!isVowel(s[i])&&i<j){
                i++;
            }
            while(!isVowel(s[j])&&i<j){
                j--;
            }
            if(i<j){
                char temp=st[i];
                st[i]=st[j];
                st[j]=temp;
                i++;
                j--;
            }
        }
        return st;
    }
    bool isVowel(char ch) {
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U';
    }
};