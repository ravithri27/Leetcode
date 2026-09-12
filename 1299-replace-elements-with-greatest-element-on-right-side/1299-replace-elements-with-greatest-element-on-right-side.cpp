class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        ans.push_back(-1);
        int n=arr.size();
        int max=arr[n-1];
        for(int i=n-2;i>=0;i--){
            if(arr[i+1]>max){
                max=arr[i+1];
            }
            ans.push_back(max);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};