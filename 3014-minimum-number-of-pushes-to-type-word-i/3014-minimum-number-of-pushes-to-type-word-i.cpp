class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        int block=n/8;
        int remaining=n%8;
        return (4*block*(block+1) + remaining*(block+1));
    }
};