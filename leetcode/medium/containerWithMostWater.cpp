//https://leetcode.com/problems/container-with-most-water/description/
#include <bits/stdc++.h>
class Solution {
public:
    long getArea(int a, int b){
        return a * b;
    }

    long maxArea(vector<int>& v) {
        const int n = v.size();
        long ans = 0;
        int i = 0, j = v.size() - 1;
        while(i != j){
            ans = max(ans, getArea(j-i, min(v[i], v[j]) ));
            (v[i] < v[j])?i++:j--;
        }
        return ans;
    }
};
