class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> arr(n, 0);
        for (int ind = 0; ind < n; ind++) {
            if (s[ind] == c) {
                arr[ind] = 0;
                int i = ind - 1;
                while (i >= 0 && s[i] != c) {
                    if (arr[i] == 0 || arr[i] > ind - i)
                        arr[i] = ind - i;
                    i--;
                }
                int j = ind + 1;
                while (j < n && s[j] != c) {
                    if (arr[j] == 0 || arr[j] > j - ind)
                        arr[j] = j - ind;
                    j++;
                }
            }
        }
        return arr;
    }
};