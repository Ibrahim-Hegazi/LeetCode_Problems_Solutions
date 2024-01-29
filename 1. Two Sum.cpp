class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int ans1{0},ans2{0};
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]].push_back(i);
        for(int i=0;i<nums.size();i++){
            int complement=target-nums[i];
            auto it=mp.find(complement);
            if(it!=mp.end()){
                for(auto v: it->second){
                    if(v!=i && nums[i]+nums[v]==target){
                        ans1=i,ans2=v;
                    }
                }
            }
        }
        return vector<int>{ans1,ans2};
    }
};
