// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=0,right=n,mid1=0;
        while(left<=right){
            int mid=left + (right - left) / 2;
            if(isBadVersion(mid)==true){
                right=mid-1;
                mid1=mid;
            }else{
                left=mid+1;
            }
        }
        return mid1;
    }
};