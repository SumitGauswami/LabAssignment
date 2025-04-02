class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        // for(int i=0;i<nums.size();i++){
        //     mpp.push(nums[i],i)}
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int x=target - nums[i];
           
            if(mp.find(x)!=mp.end()){
                return {mp[x],i};
            }
            mp[n]=i;
        }
        return{-1,-1};
    }
};

