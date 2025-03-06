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
