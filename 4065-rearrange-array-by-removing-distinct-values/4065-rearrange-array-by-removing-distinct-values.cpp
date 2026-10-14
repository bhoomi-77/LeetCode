class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         vector<int> ans;

        while (!nums.empty()) {
            set<int> s(nums.begin(), nums.end());

            for (int x : s) {
                ans.push_back(x);

                for (int i = 0; i < nums.size(); i++) {
                    if (nums[i] == x) {
                        nums.erase(nums.begin() + i);
                        break;
                    }
                }
            }
        }

        return ans;
    
    }
};