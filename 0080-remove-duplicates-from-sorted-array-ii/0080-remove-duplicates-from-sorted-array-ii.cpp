class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=1;
        int ptr=1;

        if(nums.empty()) return 0;

        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                if(cnt<2){
                    cnt++;
                    nums[ptr]=nums[i];
                    ptr++;
                }
            }
            else{
                nums[ptr]=nums[i];
                cnt=1;
                ptr++;
            }
        }
        return ptr;
    }
};