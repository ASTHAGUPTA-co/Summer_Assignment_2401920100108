class Solution {
public:
    int strStr(string haystack, string needle) {
       int i=0;
       int j=0;
       int k=0;
       while(i<haystack.size() && j<needle.size()){
        if(haystack[i]==needle[j]){
            i++;
            j++;
        }else{
            k++;
            i=k;
            j=0;
        }
        if(j==needle.size()){
            return k;
        }
        if(i==haystack.size()) return -1;
       } 
       return -1;
    }
};
