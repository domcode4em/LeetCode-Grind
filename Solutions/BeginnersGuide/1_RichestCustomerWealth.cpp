/*
You are given an m x n integer grid accounts where accounts[i][j] is the amount 
of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. 
The richest customer is the customer that has the maximum wealth.
Example 1:

Input: accounts = [[1,2,3],[3,2,1]]
Output: 6
Explanation:
1st customer has wealth = 1 + 2 + 3 = 6
2nd customer has wealth = 3 + 2 + 1 = 6
Both customers are considered the richest with a wealth of 6 each, so return 6.
*/

// First solution done in about 20 minutes, moajority figuring out how to itterate correctly
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int maxWealth = 0;
        cout << accounts.size();
        // i iterate through account owners
        for(int i = 0; i < accounts.size(); i++)
        {
            int sumOfAccount = 0;
            // j iterrates through owner accounts
            for(int j = 0; j < accounts[i].size(); j++)
            {
                sumOfAccount += accounts[i][j];
            }
            if(sumOfAccount > maxWealth)
            {
                maxWealth = sumOfAccount;
            }
        }
        return maxWealth;
    }
};
