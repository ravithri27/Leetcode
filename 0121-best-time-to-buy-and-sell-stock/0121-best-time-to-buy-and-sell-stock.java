class Solution {
    static int min(int a,int b){
        if(a>b){
            return b;
        }
        return a;
    }
    static int max(int a,int b){
        if(a>b){
            return a;
        }
        return b;
    }
    public int maxProfit(int[] prices) {
        int n=prices.length;
        int cost=0,profit=0,mini=prices[0];
        for(int i=0;i<n;i++){
            cost=prices[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,prices[i]);
        }
        return profit;
    }
}