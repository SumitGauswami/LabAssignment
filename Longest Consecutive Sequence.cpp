class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int c=1;
        for(int i=1;i<nums.size();i++){
          if(nums[i]==nums[i-1]+1) c++;
          else if(nums[i]==nums[i-1]);
          else {
            break;
          }
        }
        return c;
    }
};
