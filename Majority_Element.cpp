class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count =0;    

        unordered_map<int,int>m;
        for(auto num:nums){
            m[num]++;
        }           
        
        for(auto itr=m.begin(); itr!=m.end(); itr++){
            if(itr->second>n/2){
                return itr->first;
            }
        }
        return -1;
    }
};
