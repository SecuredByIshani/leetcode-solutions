class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;

        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            int target=-nums[i];

            if(i>0 && nums[i]==nums[i-1]) continue;

            while(left<right){
                int sum=nums[left]+nums[right];
                if(sum==target){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;

                    // remove left dup
                    while(left<right && nums[left]==nums[left-1]) left++;
                    // remove right dup
                    while(left<right && nums[right]==nums[right+1]) right--;
                }
                else if(sum<target) left++;
                else right--;
            }
        }
        return ans;
    }
};