class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>>ans;
       unordered_map<string,vector<string>>mp;
        for(auto str:strs){
            string srtd = str;
            sort(srtd.begin(),srtd.end());
            mp[srtd].push_back(str);
        }
        for(auto pair:mp){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
