class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int>freq(26,0);
        for(char ch:s){
            freq[ch-'a']++;
        }

        int ans=INT_MAX;
        vector<int>freqIdx(26,0);
        for(char ch:target){
            freqIdx[ch-'a']++;
        }

        for(char ch:target){
            ans=min(ans,freq[ch-'a']/freqIdx[ch-'a']);
        }

        return ans;
    }
};