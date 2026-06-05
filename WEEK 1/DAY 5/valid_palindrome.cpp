class Solution {
public:
    bool isPalindrome(string s) {
        int lp=0,rp=s.length()-1;
        while(lp<rp){
            if(!isalnum(s[lp])){
                lp++;
            }else if(!isalnum(s[rp])){
                rp--;
            }else if(tolower(s[lp])!=tolower(s[rp])){
                return false;
            }else{
                lp++;rp--;
            }
        }
        return true;
    }
};
