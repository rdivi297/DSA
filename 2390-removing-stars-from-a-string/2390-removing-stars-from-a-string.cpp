class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string ans="";
        for(auto i:s){
            if(!st.empty() && st.top()=='*') {
                st.pop();
                st.pop();
            }
         st.push(i);
        }
        if(!st.empty() && st.top()=='*') {
            st.pop();
            st.pop();
        }
        while(!st.empty()) {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans ;
    }
};