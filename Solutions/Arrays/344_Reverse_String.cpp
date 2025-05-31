/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
*/
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
