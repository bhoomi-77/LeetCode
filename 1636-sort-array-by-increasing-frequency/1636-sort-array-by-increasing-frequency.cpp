
class Solution {
    static bool fun(pair<int, int> a, pair<int, int> b) {
        if (a.first == b.first) {
            return a.second > b.second;
        }
        return a.first < b.first;
    }

public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> m;

        for (auto x : nums) {
            m[x]++;
        }

        vector<pair<int, int>> v;

        for (auto x : m) {
            v.push_back({x.second, x.first});
        }

        sort(v.begin(), v.end(), fun);

        vector<int> ans;

        for (auto x : v) {
            for (int i = 0; i < x.first; i++) {
                ans.push_back(x.second);
            }
        }

        return ans;
    }
};
