class Solution {
public:
    string reversePart(string s, int start, int end) {
    int i = start, j = end - 1;

    while (i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }

    return s;
}

string reverseStr(string s, int k) {
    if (s.length() <= k) {
        s = reversePart(s, 0, s.length());
    }
    else if (s.length() <= 2 * k) {
        s = reversePart(s, 0, k);
    }
    else {
        for (int i = 0; i < s.length(); i += 2 * k) {
            int end = min(i + k, (int)s.length());
            s = reversePart(s, i, end);
        }
    }

    return s;
}
 };