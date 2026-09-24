class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long maxi=INT_MIN;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                long long m=gcd(nums[i],nums[j]);
                long long r=(1LL*nums[i]*nums[j])/(1LL*m*m);
                maxi=max(maxi,r);
            }
        }
        return maxi;
    }
};