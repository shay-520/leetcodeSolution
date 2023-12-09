#include <algorithm>
#include <vector>
using namespace std;

class Node {
public:
  int val;
  vector<Node *> children;

  Node() {}

  Node(int _val) { val = _val; }

  Node(int _val, vector<Node *> _children) {
    val = _val;
    children = _children;
  }
};
class Solution {
public:
  int maxDepth(Node *root) {
    if (!root)
      return 0;
    if (root->children.empty()) {
      return 1;
    }
    int max_depth = 0;
    for (auto child : root->children) {
      max_depth = max(max_depth, maxDepth(child) + 1);
    }
    return max_depth;
  }
};