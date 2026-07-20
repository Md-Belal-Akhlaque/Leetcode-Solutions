class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for (int i = digits.size() - 1; i >= 0; i--) {

            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            // digit is 9
            digits[i] = 0;
        }

        // Agar yaha tak aa gaye matlab sab digits 9 the
        digits.insert(digits.begin(), 1);

        return digits;
    }
};