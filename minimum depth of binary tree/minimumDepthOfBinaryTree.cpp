#include <algorithm>
#include <optional>
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};
using namespace std;
class Solution {
public:
  int minDepth(TreeNode *root) {
    if (!root)
      return 0;
    if (!root->left && !root->right)
      return 1;
    if (root->left && !root->right) {
      return minDepth(root->left) + 1;
    }
    if (!root->left && root->right) {
      return minDepth(root->right) + 1;
    }
    return min(minDepth(root->left) + 1, minDepth(root->right) + 1);
  }
};