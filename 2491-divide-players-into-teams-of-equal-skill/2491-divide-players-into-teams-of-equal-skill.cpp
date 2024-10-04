class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int l=0;
        long long ans=0;
        int h=skill.size()-1;
        while(l<h){
            ans+=skill[l++]*skill[h--];
           
        }
        int sum=skill[0]+skill[skill.size()-1];
        l=1;
        h=skill.size()-2;
        while(l<h){
            if(skill[l++]+skill[h--]!=sum ) return -1;
            
        }
        return ans;
    }
};