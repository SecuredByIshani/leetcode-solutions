class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0;
        unordered_map<int,int>freq;
        int res=0;

        for(int high=0;high<s.size();high++){
            freq[s[high]]++;
            int len=high-low+1;

            while(freq.size()<len){
                freq[s[low]]--;
                if(freq[s[low]]==0) freq.erase(s[low]);
                low++;
                len=high-low+1;
            }

            len=high-low+1;
            res=max(res,len);
        }
        return res;
    }
};