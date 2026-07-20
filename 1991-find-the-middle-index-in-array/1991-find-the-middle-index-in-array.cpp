class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int leftSum = 0, totalSum = 0;

        for(auto it: nums)
            totalSum +=it;
            
        for (int i = 0; i < nums.size(); i++) {
            if (leftSum == (totalSum - leftSum - nums[i]))
                return i;

            leftSum += nums[i];
        }
        return -1;
    }
};