class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int x, n=nums.size();
        if(n==0)
        return nums[0];
        
        sort(nums.begin(), nums.end()); 

        for(int i=0;i<nums.size(); i++){
            if(nums[i]==nums[i+1]){
                i++;
                x=nums[i];
            }
        }
        return x;
    }
};
