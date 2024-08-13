class Solution {
public:
    int search(vector<int>& nums, int x) {
        int n= nums.size();
        if(n==1){
            return nums[0]==x ? 0 : -1;
        }

        int s=0, e=n-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(x==nums[mid]){
                return mid;
            }
            if(nums[s]<=nums[mid]){
                if(x>=nums[s] and x<=nums[mid]){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if(x>=nums[mid] and x<=nums[e]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return -1;
    }
};
