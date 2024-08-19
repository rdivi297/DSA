class Solution {
public:
    int brokenCalc(int startvalue, int target) {
        int c=0;
        while(startvalue!=target){
            if(target<startvalue){
                c+=startvalue-target;
                startvalue=target;
            }
            else{
                if(target%2==0){ target/=2; c++;}
                else {target++; c++;}
                
            } 
        } return c;
    }
};