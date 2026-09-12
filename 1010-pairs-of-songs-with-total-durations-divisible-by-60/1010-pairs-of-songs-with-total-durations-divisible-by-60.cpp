class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int cnt=0;
        vector<int> freq(60,0);
        for(int i=0;i<time.size();i++){
            int rem=time[i]%60;
            int need=(60-rem)%60;
            cnt+=freq[need];
            freq[rem]++;
        }
        return cnt;
    }
};