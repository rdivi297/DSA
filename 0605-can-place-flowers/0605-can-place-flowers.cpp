class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c=0;
        flowerbed.insert(begin(flowerbed),0);
        flowerbed.push_back(0);
        
        for(int i=1;i<flowerbed.size()-1;i++){
            if(!flowerbed[i] && !flowerbed[i+1] && !flowerbed[i-1]) {c++;flowerbed[i]++;}
        }
        return n<=c;
    }
};