class Solution {
public:
    int titleToNumber(string columnTitle) {
        map<char,int> hashmap;
        for(int i='A';i<='Z';i++){
            hashmap[i]=i-'A'+1;
        }
        int n=columnTitle.size();
        int cnt=1;
        int ans=0;
        ans+=hashmap[columnTitle[n-1]];
        for(int i=n-2;i>=0;i--){int p=1;
            for(int j=cnt;j>0;j--){
                p*=26;
            }
            ans+=p*hashmap[columnTitle[i]];
            cnt++;
        }
        return ans;
    }
};