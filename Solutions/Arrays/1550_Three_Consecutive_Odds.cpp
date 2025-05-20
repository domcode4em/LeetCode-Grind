/*
Given an integer array arr, return true if there are three consecutive odd numbers 
in the array. Otherwise, return false.

Example 1:
Input: arr = [2,6,4,1]
Output: false
Explanation: There are no three consecutive odds.

Example 2:
Input: arr = [1,2,34,3,4,5,7,23,12]
Output: true
Explanation: [5,7,23] are three consecutive odds.
*/
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        // counter for three odds
        int count = 0; 

        // plan to loop through array and reset,start, and to counter
        // as loop progresses
        for(int i = 0; i < arr.size(); i++)
        {
            if(count == 3)
            {
                return true;
            }
            else if(arr[i] % 2 != 0)
            {
                count++;
            }
            else
            {
                count = 0;
            }
        }
        // in case is not caught in for loop
        if(count == 3)
        {
            return true;
        }
        return false;
    }
};
