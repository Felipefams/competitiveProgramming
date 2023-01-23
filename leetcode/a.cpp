class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int i = x;
        stack<int> st;
        vector<int> v;
        while(i >= 10){
            i = i % 10;
            st.push(x - i*10);
            if(i < 10) st.push(i);
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
};
