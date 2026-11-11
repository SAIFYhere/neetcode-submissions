class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0) return 0;
        int longest=1;
        int maxx=1;

        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])  continue;
            else if(nums[i]-1==nums[i-1]){
                longest++;
            }
            else{
            maxx=max(maxx,longest);
            longest=1;
            }
        }
        maxx=max(longest,maxx);
        return maxx;
    }
};
