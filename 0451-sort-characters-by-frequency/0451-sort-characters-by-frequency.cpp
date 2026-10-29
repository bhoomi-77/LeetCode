
class Solution {
    static bool fun(pair<char,int> key1, pair<char,int> key2) {
        return key1.second > key2.second;
    }

public:
    string frequencySort(string s) {
        map<char,int> m;

        for(auto x : s) {
            m[x]++;
        }

        vector<pair<char,int>> vec(m.begin(), m.end());

        sort(vec.begin(), vec.end(), fun);

        string ans = "";

        for(auto x : vec) {
            ans += string(x.second, x.first);
        }

        return ans;
    }
};
