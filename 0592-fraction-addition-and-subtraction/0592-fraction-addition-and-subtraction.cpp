class Solution {
public:
    string fractionAddition(string expression) {
        istringstream in(expression);
        int num=0;
        int den=1;
        int currn; int currd;
        char d;
        while(in>>currn>>d>>currd){
            num=num*currd + den*currn;
            den=den*currd;
            int g=abs(__gcd(num,den));
            num/=g;
            den/=g;
        }
        return to_string(num) + "/"+ to_string(den);
    }
};