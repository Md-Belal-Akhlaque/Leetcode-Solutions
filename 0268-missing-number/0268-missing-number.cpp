class Solution {
    public:
        int findingsum(int num){
            if(num ==0)
                return 0;
            return num +findingsum(num-1);
        }

public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int total = findingsum(size);
        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return total-sum;
    }
};