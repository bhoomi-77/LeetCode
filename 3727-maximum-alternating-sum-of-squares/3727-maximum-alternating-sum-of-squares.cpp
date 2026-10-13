class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        int h=n/2;

        vector<long long>arr;
        for(int x:nums){
            arr.push_back(abs((long long)x*x));
        }
        sort(arr.begin(),arr.end());

        long long ans=0;
        for(int i=0;i<h;i++){
            ans-=arr[i];
        }
        for(int i=h;i<n;i++){
            ans+=arr[i];
        }
        return ans;

    }
};