#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol98;

/*
    2
   / \
  1   3

Input: [2,1,3]
Output: true
*/

tuple<Node *, bool>
testFixture1()
{
  auto root = new Node(2);
  root->left = new Node(1);
  root->right = new Node(3);

  return {root, true};
}
/*
    5
   / \
  1   4
     / \
    3   6

Input: [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 4.

*/

tuple<Node *, bool>
testFixture2()
{
  auto root = new Node(5);
  root->left = new Node(1);
  root->right = new Node(4);
  root->right->left = new Node(3);
  root->right->right = new Node(6);

  return {root, false};
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  cout << "Expect to see: " << get<1>(f) << endl;
  cout << sol.isValidBST(get<0>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  Solution sol;
  cout << "Expect to see: " << get<1>(f) << endl;
  cout << sol.isValidBST(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();
}