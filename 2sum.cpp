class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int sum = 0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            sum = target-nums[i];
            
            if(mp.find(sum) != mp.end()){
                ans.push_back(mp[sum]);
                ans.push_back(i);
                return ans;
            }else{
                mp[nums[i]] = i;
            }
        }
        return ans;
    }
};