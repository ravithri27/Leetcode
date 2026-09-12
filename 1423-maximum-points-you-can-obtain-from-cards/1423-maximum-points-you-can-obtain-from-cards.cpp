class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total_first=0,total_second=0,n=cardPoints.size(),max=0;
        for(int i=0;i<k;i++){
            total_first+=cardPoints[i];
        }
        int cnt=total_first;
        max=total_first;
        for(int i=k-1,j=n-1;i>=0;i--,j--){
            cnt=cnt-cardPoints[i];
            cnt=cnt+cardPoints[j];
            if(cnt>max){
                max=cnt;
            }
        }
        return max;
    }
};