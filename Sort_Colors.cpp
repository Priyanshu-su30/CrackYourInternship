class Solution {
public:
    void sortColors(vector<int>& nums) {
        int temp = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]>nums[j]){
                    temp = nums[j];
                    nums[j]=nums[i];
                    nums[i]=temp;
                }
            }
        }
    }
};
