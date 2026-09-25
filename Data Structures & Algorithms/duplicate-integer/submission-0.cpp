class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool has = false;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==j)
                continue;
                if(nums[i]==nums[j])
                has = true;
            }
        }
        return has;
    }
};