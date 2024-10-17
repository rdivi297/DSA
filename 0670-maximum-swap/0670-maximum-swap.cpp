class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        for(int i=0;i<s.size();i++){
            auto p=max_element(s.rbegin(),s.rend()-i);
            if(s[i]!=*p) 
            {
                swap(s[i],*p);
                break;
            }
        } return stoi(s);
    }
};