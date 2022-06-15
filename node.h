#ifndef NODE_H
#define NODE_H

#include <vector>
#include <string>
#include <cinttypes>
using namespace std;

namespace sol98
{
    struct Node
    {
        long val;
        Node *left;
        Node *right;
        Node(long val) : val(val), left(nullptr), right(nullptr){};
    };
}
#endif