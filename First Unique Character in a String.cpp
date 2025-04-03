class Solution {
public:
    int firstUniqChar(string str) {
        int s=str.size();
    unordered_map<char,int>mp;

        for(int i=0;i<s;i++){
          mp[str[i]]++;
        }
         for(int i=0;i<s;i++){
         if(mp[str[i]]==1) return i;
        }
        return -1;
    }
};
