class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()>magazine.size()) return false;
        vector<int>hash1(26,0);
        vector<int>hash2(26,0);
        for(auto it:ransomNote ){
            hash1[it-'a']++;
        }
        for(auto it:magazine ){
            hash2[it-'a']++;
        }
        for(int i=0;i<ransomNote.size();i++){
            if(hash1[ransomNote[i]-'a']>hash2[ransomNote[i]-'a']) return false;
        }
        return true;
    }
};
