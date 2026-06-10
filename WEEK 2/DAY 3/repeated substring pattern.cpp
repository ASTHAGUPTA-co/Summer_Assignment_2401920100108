class Solution {
public:
   //kmp solution
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        vector<int>lps(n,0);
        int len = 0;
        int i=1;
        while(i<n){
            if(s[i]==s[len]){
                len++;
                lps[i] = len;
                i++;
            }else{
                if(len!=0){
                    len = lps[len-1];
                }else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        int longest = lps[n-1];
        if(longest==0) return false;
        return n%(n-longest) ==0;
    }
};
