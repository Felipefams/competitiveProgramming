//https://leetcode.com/problems/palindrome-number/solutions/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int i = 0;
        stack<int> st;
        vector<int> v;
        while(x > 0){
            i = x % 10;
            st.push(i);
            x /= 10;
        }
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        for(int i = 0, j = v.size() - 1; i < j; ++i, --j){
            if(v[i] != v[j]) return false;
        }
        return true;
    }
};;
