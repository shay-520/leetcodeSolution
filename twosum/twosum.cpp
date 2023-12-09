#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    std::unordered_map<int, int> map;
    int i{};
    for (auto n : nums) {
      auto iter = map.find(n);
      if (iter != map.end()) {
        return {i, iter->second};
      }
      map[target - n] = i;
      i++;
    }
    return {};
  }
};