class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        string ans="";
        sort(strs.begin(),strs.end());
        string a=strs[0];
        string b=strs[strs.size()-1];
        if(a.size()==0 || b.size()==0) return ans;
        int i=0,j=0;
        while(a[i]==b[j] && i<a.size() && j<b.size()){
            ans+=a[i];
            i++;j++;
        }
        return ans;
    }
};
