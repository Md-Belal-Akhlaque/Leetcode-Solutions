class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans = nums;
        int size = nums.size();
        int i =0;
        while(i<size){
            ans.push_back(nums[i]);
            i++;
        }
        return ans;
    }
};