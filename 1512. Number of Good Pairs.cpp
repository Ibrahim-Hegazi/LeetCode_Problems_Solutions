class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mp;
        for(auto v:nums){
            mp[v]++;
        }
        long cnt{0};
        zzz:
        for(auto &v:mp){
            if(v.second>=2){
                cnt+=v.second-1;
                v.second--;
                if(v.second>1)
                    goto zzz;
                else
                    continue;
            }
        }
        return cnt;
    }
};
