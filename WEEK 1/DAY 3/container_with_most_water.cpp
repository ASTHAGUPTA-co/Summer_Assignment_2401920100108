class Solution {
public:
    int maxArea(vector<int>& height) {
        int st=0,ed=height.size()-1;
        int width=0,area=0,mxarea=0;
        while(st<=ed){
            width=ed-st;
            area=width*min(height[st],height[ed]);
            mxarea=max(area,mxarea);
            if(height[st]<height[ed]){
                st++;
            }else{
                ed--;
            }
        }
        return mxarea;
    }
};
