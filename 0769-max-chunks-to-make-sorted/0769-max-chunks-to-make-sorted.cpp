class Solution {
public:
    int max(int a,int b){
        if(a>b)
            return a;
        return b;
    }
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        vector<int> maxs;
        int maxseen=arr[0];
        maxs.push_back(arr[0]);
        for(int i=1;i<n;i++){
            maxseen=max(maxseen,arr[i]);
            maxs.push_back(maxseen);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(maxs[i]==i){
                ans++;
            }
        }
        return ans;
    }
};