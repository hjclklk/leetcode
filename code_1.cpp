class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       std::vector<int> v;
       for (int i = 0; i < nums.size()-1; i++)
       	for (int j = i+1; j < nums.size()-1; j++)
       		if ((*nums)[i]+(*nums)[j] == target)
       		{
       			v.push_back(i+1);
       			v.push_back(j+1);
       			return v;
       		}
    }
};