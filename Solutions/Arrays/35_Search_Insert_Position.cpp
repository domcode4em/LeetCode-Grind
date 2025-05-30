class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // zero case
        if(target == 0 && target < nums[0])
        {
            return 0;
        }
        else if(nums.size() == 1 && target > nums[0])
        {
            return 1;
        }
        else if(nums.size() == 1 && target <= nums[0])
        {
            return 0;
        }

        // for loop for test cases
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(target == nums[i])
            {
                return i;
            }
            else if(target <= nums[i+1] && target > nums[i])
            {
                return i+1;
            }
            else if(target < nums[i])
            {
                return 0;
            }
        }
        return nums.size();
    }
};
