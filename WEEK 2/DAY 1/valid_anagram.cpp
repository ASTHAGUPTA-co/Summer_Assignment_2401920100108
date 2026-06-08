class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int>hash1(26,0);
        vector<int>hash2(26,0);
        for(int i=0;i<s.size();i++){
            hash1[s[i]-'a']++;
            hash2[t[i]-'a']++;
        }
        return hash1==hash2;
    }
};
