class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int low=0, high=0;
        int sum=0;
        int res=INT_MAX;

        while(high<n){
            // hire
            sum+=nums[high];

            while(sum>=target){
                int len=high-low+1;
                res=min(res,len);

                // fire
                sum-=nums[low];
                low++;
            }
            high++;
        }
        if(res==INT_MAX) return 0;
        return res;
    }
};