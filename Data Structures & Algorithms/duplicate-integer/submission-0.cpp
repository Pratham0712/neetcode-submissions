class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> hash;
        for(auto it:nums){
            if(hash[it]>0) return true;
            hash[it]++;
        }
        return false;
    }
};