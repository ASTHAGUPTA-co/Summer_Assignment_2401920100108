class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n =heights.size();
        vector<int>ls(n,-1);
        vector<int>rs(n,n);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(!st.empty() && heights[st.top()]<heights[i]){
              ls[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i=n-1;i>=0;i--){
          while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(!st.empty() && heights[st.top()]<heights[i]){
              rs[i]=st.top();
            }
            st.push(i);
        }
        int area=0,mxarea = 0;
        for(int i=0;i<n;i++){
           area = (rs[i]-ls[i]-1) * heights[i];
           mxarea = max(area,mxarea);
        }
        return mxarea;
    }
};
