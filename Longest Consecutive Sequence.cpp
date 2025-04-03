class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       if(nums.size()==0) return 0;
       int c=1;
        int mc=0;
        for(int i=1;i<nums.size();i++){
          if(nums[i]==nums[i-1]+1) c++;
          else if(nums[i]==nums[i-1]);
          else {
            mc=max(mc,c);
            c=1;
          }
        }
        return max(mc,c);
    }
};
