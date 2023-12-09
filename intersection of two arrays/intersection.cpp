#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;
class Solution {
public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
    unordered_set<int> set{};
    unordered_set<int> result{};
    for (auto i : nums1) {
      set.insert(i);
    }
    for (auto i : nums2) {
      auto num = set.find(i);
      if (num != set.end()) {
        result.insert(*num);
      }
    }
    return vector<int>(result.begin(), result.end());
  }
};