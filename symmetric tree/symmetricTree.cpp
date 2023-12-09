#include <algorithm>
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
  bool symmetric(TreeNode *t1, TreeNode *t2) {
    if (t1 == t2 && t1 == nullptr) {
      return true;
    }
    if (t1 == nullptr || t2 == nullptr) {
      return false;
    }
    return (symmetric(t1->left, t2->right) && (t1->val == t2->val)) &&
           symmetric(t1->right, t2->left);
  }

public:
  bool isSymmetric(TreeNode *root) {
    return symmetric(root->left, root->right);
  }
};