#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> currentSubset;

    // Helper function for recursion
    function<void(int)> backtrack = [&](int j) {
        // Add the current subset to the result
        result.push_back(currentSubset);
        
        // Explore all options by including elements from index j to the end
        for (int i = j; i < nums.size(); ++i) {
            // Include nums[i] in the current subset
            currentSubset.push_back(nums[i]);
            
            // Recur to generate subsets starting from the next element
            backtrack(i + 1);
            
            // Backtrack by removing the last element added to the current subset
            currentSubset.pop_back();
        }
    };

    // Start recursion from index 0
    backtrack(0);

    return result;
}

int main(void) {
    vector<int> nums = {1, 2, 3};
    auto ans = subsets(nums);
    for (int i = 0; i < ans.size(); ++i) {
        for (int j = 0; j < ans[i].size(); ++j) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}