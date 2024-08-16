class Solution {
public:
    vector<string>t19={"","One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    vector<string>tens={"","","Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety "};
    string numberToWords(int num) {
       if(num==0) return "Zero";
       return help(num);
    }
string help(int n){
    string ans;
    if (n<20) ans=t19[n];
    else if(n<100) ans=tens[n/10]+t19[n%10];
    else if(n<1000) ans=help(n/100)+" Hundred "+help(n%100); //hundereds
    else if(n<1000000) ans=help(n/1000)+" Thousand "+help(n%1000); //thousands
    else if(n<1000000000) ans=help(n/1000000)+" Million "+help(n%1000000); //millions 
    else ans=help(n/1000000000)+" Billion "+help(n%1000000000); //billions 
    ans.erase(ans.find_last_not_of(' ') + 1); 
    return ans;
}
};