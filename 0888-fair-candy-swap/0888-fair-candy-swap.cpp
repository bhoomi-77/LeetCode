class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0, sumB = 0;

        for (int a : aliceSizes)
            sumA += a;

        for (int b : bobSizes)
            sumB += b;

        int diff = (sumA - sumB) / 2;

        unordered_set<int> S(aliceSizes.begin(), aliceSizes.end());

        for (int b : bobSizes) {
            if (S.count(b + diff)) {
                return {b + diff, b};
            }
        }

        return {};
    }
};