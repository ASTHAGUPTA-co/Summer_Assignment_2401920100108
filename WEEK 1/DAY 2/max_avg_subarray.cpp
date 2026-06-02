class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr_sum = 0;
        for(int i=0;i<k;i++){
            curr_sum+=nums[i];
        }
        double mx_sum = curr_sum;
        for(int i=k;i<nums.size();i++){
            curr_sum+=nums[i]-nums[i-k];
            mx_sum = max(mx_sum,curr_sum);
        }
        return mx_sum/k;
    }
};
