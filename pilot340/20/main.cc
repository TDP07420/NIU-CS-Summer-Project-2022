/*

Given the roots of two binary trees p and q, write a function to determine if they are the same.

Example test cases (Input strings are layer by layer nodes of the tree - level order).
input: [1 2 3 4][1 2 3 4]
output: true

input: [1 2 4][1 2 3 4]
output: false

input: [1 2 1][1 null 1]
output: false

*/

#include <iostream>
#include <queue>
#include <string>
#include <sstream>

#include "treenode.h"
using namespace std;

TreeNode* stringToTreeNode(string input) {
    input = input.substr(1, input.length() - 2);
    if (!input.size()) {
        return nullptr;
    }

    string item;
    stringstream ss;
    ss.str(input);

    getline(ss, item, ' ');

    if (item == "null")
    {
        TreeNode* root = nullptr;
        return root;
    }

    TreeNode* root = new TreeNode(stoi(item));
    queue<TreeNode*> nodeQueue;
    nodeQueue.push(root);

    while (true) {
        TreeNode* node = nodeQueue.front();
        nodeQueue.pop();

        //left child
        if (!getline(ss, item, ' ')) {
            break;
        }

        if (item != "null") {
            int leftNumber = stoi(item);
            node->left = new TreeNode(leftNumber);
            nodeQueue.push(node->left);
        }

        //right child
        if (!getline(ss, item, ' ')) {
            break;
        }

        if (item != "null") {
            int rightNumber = stoi(item);
            node->right = new TreeNode(rightNumber);
            nodeQueue.push(node->right);
        }
    }
    return root;
}

//reference: LeetCode Example on Homepage.
void prettyPrintTree(TreeNode* node, string prefix = "", bool isLeft = true) {
    if (node == nullptr) {
        cout << "Empty tree" << endl;
        return;
    }

    if(node->right) {
        prettyPrintTree(node->right, prefix + (isLeft ? "│   " : "    "), false);
    }

    cout << prefix + (isLeft ? "└── " : "┌── ") + to_string(node->value) + "\n";

    if (node->left) {
        prettyPrintTree(node->left, prefix + (isLeft ? "    " : "│   "), true);
    }
}


void testcase(string tree1, string tree2)
{
   //take two input strings and build two binary trees p and q
   TreeNode* p_root = stringToTreeNode(tree1);
   prettyPrintTree(p_root);
   TreeNode* q_root = stringToTreeNode(tree2);
   prettyPrintTree(q_root);

   //call the funciton students wrote
   cout << "output:" << isSameTree(p_root, q_root) << endl << endl;
}


int main()
{
    //input strings are layer by layer nodes of the tree.

    testcase("[null]", "[null]");

    testcase("[]", "[]");

    testcase("[1]", "[1]");

    testcase("[1 2 3 4]", "[1 2 3 4]");

    testcase("[1 2 4]", "[1 2 3 4]");

    testcase("[1 2 1]", "[1 null 1]");



}


