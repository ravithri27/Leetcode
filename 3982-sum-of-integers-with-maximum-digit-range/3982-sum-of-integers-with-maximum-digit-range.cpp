class Solution {
public:

    int maxDigitRange(vector<int>& nums) {

        int maxRange = -1;
        int sum = 0;

        for (int num : nums) {

            int temp = num;
            int lar = 0;
            int sma = 9;

            if (temp == 0) {
                lar = sma = 0;
            }

            while (temp > 0) {
                int digit = temp % 10;

                lar = max(lar, digit);
                sma = min(sma, digit);

                temp /= 10;
            }

            int range = lar - sma;

            if (range > maxRange) {
                maxRange = range;
                sum = num;      // reset sum
            }
            else if (range == maxRange) {
                sum += num;     // add to sum
            }
        }

        return sum;
    }
};