class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size(), sum = 0, pre = 0;
        for (int x : nums) sum += x;

        vector<int> res(n);
        for (int i = 0; i < n; i++) {
            res[i] = nums[i]*i - pre + (sum - pre - nums[i]) - nums[i]*(n-i-1);
            pre += nums[i];
        }
        return res;
    }
};
