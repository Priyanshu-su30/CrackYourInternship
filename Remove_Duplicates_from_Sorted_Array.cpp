class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1)    return 1;
        int startIdx = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                startIdx++;
                nums[startIdx] = nums[i];
            }  
        }
        return startIdx+1;
    }
};
