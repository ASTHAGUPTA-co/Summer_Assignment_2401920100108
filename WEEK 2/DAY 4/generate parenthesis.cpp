class Solution {
public:  
    vector<string>res;
    void solve(int open, int close, string curr) {
        if (open == 0 && close == 0) {
            res.push_back(curr);
            return;
        }
        
        if (open > 0) {
            solve(open - 1, close, curr + "(");  // add '('
        }
        
        if (close > open) {
            solve(open, close - 1, curr + ")");  // add ')'
        }
    }
    vector<string> generateParenthesis(int n) {
        solve(n, n, "");
        return res;
    }
    
};
