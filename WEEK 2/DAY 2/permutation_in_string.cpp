class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>hash(26,0);
        if(s1.size()>s2.size()) return false;
        for(auto it:s1) hash[it-'a']++;
        int l=0,r=0,cnt=s1.size();
        while(r<s2.size()){
            if(hash[s2[r]-'a']>0){
                cnt--;
            }
            hash[s2[r]-'a']--;
            
            if(r-l+1>s1.size()){
                if(hash[s2[l]-'a']>=0){
                    cnt++;
                }
                hash[s2[l]-'a']++;
                l++;
            }
            if(cnt==0) return true;
            r++;
        }
        return false;
    }
};
