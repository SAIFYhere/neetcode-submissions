class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=size(numbers)-1;
        while(left<right){
            int t = numbers[left]+numbers[right];
            if(t>target)
            right--;
            if(t<target)
            left++;
            if(t==target)
            return {left+1 ,right+1};
        }
        return {};
        
    }
};
