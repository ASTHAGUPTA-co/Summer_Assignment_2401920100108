class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>hash(26,0);
        vector<int>ans;
        if(s.size()<p.size()) return ans;
        for(auto it:p){
            hash[it-'a']++;//how many more of this char are needed
        }
        int l=0,r=0;
        int cnt=p.size();
        while(r<s.size()){
          if(hash[s[r]-'a']>0){
            cnt--;
          }
          hash[s[r]-'a']--;
          r++;
          if(cnt==0){
            ans.push_back(l);
          }
          if(r-l==p.size()){
            if(hash[s[l]-'a']>=0){// equal to zero means have exactly what is needed if removed then not satisfied
                cnt++;
            }
             hash[s[l]-'a']++;
             l++;
          }
        }
        return ans;
    }
};
