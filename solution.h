
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>

using namespace std;
namespace sol98
{

  class Solution
  {
  private:
    bool _isValidBST(Node *root, long min, long max);

  public:
    bool isValidBST(Node *root);
  };

}
#endif