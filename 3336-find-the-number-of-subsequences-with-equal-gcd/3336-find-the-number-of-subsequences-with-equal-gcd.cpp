class Solution {
public:
    static const int MOD = 1e9 + 7;

    int dp[201][201][201];

    int solve(int idx, int g1, int g2, vector<int>& nums) {
        if (idx == nums.size()) {
            return (g1 > 0 && g2 > 0 && g1 == g2);
        }

        int &ans = dp[idx][g1][g2];
        if (ans != -1) return ans;

        ans = 0;

        // Ignore current element
        ans = (ans + solve(idx + 1, g1, g2, nums)) % MOD;

        // Put in first subsequence
        ans = (ans + solve(idx + 1, gcd(g1, nums[idx]), g2, nums)) % MOD;

        // Put in second subsequence
        ans = (ans + solve(idx + 1, g1, gcd(g2, nums[idx]), nums)) % MOD;

        return ans;
    }

    int subsequencePairCount(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, 0, nums);
    }
};