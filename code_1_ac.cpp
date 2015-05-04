class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
   std::vector<int> v;
   std::map<int, int> hmap;
   for (int i = 0; i < (nums).size(); i++){
     /** judge previous nums and now nums is target**/
     if (hmap.count(target - nums[i])){
       v.push_back(hmap[target - nums[i]]+1);
       v.push_back(i+1);
       return v;
     }
     /** if not then insert into hashtable **/
     hmap.insert(pair<int, int>(numbers[i],i));
     /** 一边计算 一边处理 如果一开始全部哈希 会有两数相同的情况处理不了**/
   }
 }
};
