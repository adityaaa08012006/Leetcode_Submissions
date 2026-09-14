class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0) {
            int sum = carry;

            if (i >= 0) {
                sum = sum + (a[i] - '0');
                i = i - 1;
            }

            if (j >= 0) {
                sum = sum + (b[j] - '0');
                j = j - 1;
            }

            result += (sum % 2) + '0';
            carry = sum / 2;
        }

        if (carry == 1) {
            result += '1';
        }

        reverse(result.begin(), result.end());

        return result;
    }
};