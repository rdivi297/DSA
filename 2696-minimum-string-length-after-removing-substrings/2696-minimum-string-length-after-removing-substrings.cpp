class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        st.push(s[0]);
        int ans=0;
        for(int i=1;i<s.size();i++){
            if(!st.empty() && ((s[i]=='B'&&st.top()=='A') || (s[i]=='D'&&st.top()=='C'))) {
                st.pop();
                ans++;
        }
            else st.push(s[i]);
        } return ans==0?s.size():s.size()-2*ans;
    }
};