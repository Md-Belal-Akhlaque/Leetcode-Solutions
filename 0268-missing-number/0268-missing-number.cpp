class Solution {
    public:
        int findingsum(int num){
            if(num ==0)
                return 0;
            return num +findingsum(num-1);
        }

public:
    int missingNumber(vector<int>& nums) {

        int sum =0;
        int size = nums.size();
        int total = size*(size+1)/2;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }


        // int total = findingsum(size);
        // for(int i=0;i<nums.size();i++){
        //     sum+=nums[i];
        // }
        return total-sum;
    }
};