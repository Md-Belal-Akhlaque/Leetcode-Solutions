class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        int i =0;
        while(i<size){
            ans.push_back(nums[nums[i]]);
            i++;
        }
        return ans;
    }
};