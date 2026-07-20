class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int sum =nums[0];
        ans.push_back(sum); 
        int i =1;
        while(i<nums.size()){
            sum += nums[i];
            ans.push_back(sum);
            i++;
        }
        return ans;
    }
};