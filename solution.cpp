#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <iostream>
using namespace sol98;
using namespace std;

/*takeaways
  - pass a range to the child nodes to check
    - this approach doesn't need you to create
      different logic for handling the top root node
  - use pre-order traversal
  - time complexity O(n)
*/

bool Solution::isValidBST(Node *root)
{
  return _isValidBST(root, LONG_MIN, LONG_MAX);
}

bool Solution::_isValidBST(Node *root, long min, long max)
{
  /* for leaf node's left and right child */
  if (root == nullptr)
    return true;
  if (root->val <= min || root->val >= max)
    return false;

  /* adjust the min and max values accordingly */
  return _isValidBST(root->left, min, root->val) &&
         _isValidBST(root->right, root->val, max);
}
