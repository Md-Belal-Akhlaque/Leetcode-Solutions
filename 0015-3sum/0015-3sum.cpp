class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        set<vector<int>> st;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {

            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int curr = nums[i] + nums[left] + nums[right];
                if (curr == 0) {
                    vector<int> val = {nums[i], nums[left], nums[right]};

                    if (st.find(val) == st.end()) {
                        st.insert(val);
                    }

                    left++;
                    right--;
                } else if (curr > 0) {
                    right--;
                } else
                    left++;
            }
        }

        vector<vector<int>> res;
        for (auto x : st) {
            res.push_back(x);
        }

        return res;
    }
};