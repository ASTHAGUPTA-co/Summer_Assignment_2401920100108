class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int mxlen=0;
        unordered_map<char,int>mp;
        while(r<s.size()){
          if(mp.find(s[r])!=mp.end()){
            while(mp[s[r]]>0){
                mp[s[l]]--;
                l++;   
            }
          }
            mp[s[r]]++;
            mxlen=max(mxlen,r-l+1);
            r++;
        }
        return mxlen;
    }
};
