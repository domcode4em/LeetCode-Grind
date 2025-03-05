class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int runSum = 0;

        for(int i = 0; i < nums.size(); i++) {
            runSum += nums[i];
            nums[i] = runSum;
        }
        return nums;
    }
};
