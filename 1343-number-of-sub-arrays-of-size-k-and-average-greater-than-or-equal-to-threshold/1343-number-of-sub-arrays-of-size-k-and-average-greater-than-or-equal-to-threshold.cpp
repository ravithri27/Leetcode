class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0,j=k-1,n=arr.size();
        int sum=0,ans=0;
        for(int k=i;k<=j;k++){
            sum+=arr[k];
        }
        if(sum/k>=threshold){
            ans++;
        }
        while(j<n-1){
            sum-=arr[i];
            i++;
            j++;
            sum+=arr[j];
            if(sum/k>=threshold){
                ans++;
            }
        }
        return ans;
    }
};