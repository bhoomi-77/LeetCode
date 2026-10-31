class Solution {
    static bool fun(pair<int,int>key1,pair<int,int>key2){
        return key1.second>key2.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<pair<int,int>>vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),fun);

        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};