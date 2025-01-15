#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> v;
        vector<vector<int>> ans;
        solve(0, v, nums, ans);

        sort(ans.begin(), ans.end());

        return ans;
    }

    void solve(int i, vector<int> &v, vector<int> &nums, vector<vector<int>> &ans){
        
        if(i >= nums.size()){
            if(std::find(ans.begin(), ans.end(), v) == ans.end())
            ans.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        solve(i+1, v, nums, ans);
        v.pop_back();
        solve(i+1, v, nums, ans);
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