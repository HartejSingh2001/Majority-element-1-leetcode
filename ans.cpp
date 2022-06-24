class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),ans;
        map<int,int>mpp;
        int i;
        for(i=0;i<n;i++)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]]>floor(n/2))
            {
                ans=nums[i];
            }
        }
        return ans;
    }
};
