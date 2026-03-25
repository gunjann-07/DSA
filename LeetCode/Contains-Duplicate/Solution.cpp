1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int>seen;
5        for(int i=0;i<nums.size();i++)
6        {
7            int num = nums[i];
8            if(seen.count(num))
9            {
10                return true;
11            }
12            seen.insert(num);
13
14            
15        }
16        return false;
17    }
18};
19    
20     