#ifndef TREE_NODE
#define TREE_NODE
struct TreeNode {
     int value;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : value(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : value(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : value(x), left(left), right(right) {}
};
#endif


bool isSameTree(TreeNode* p, TreeNode* q)
{
     //both empty
     if(p == nullptr && q == nullptr)
     {
          return true;
     }

     //one node empty, other is not
     if(p == nullptr || q == nullptr)
     {
          return false;
     }

     //both not empty
     //base case
     if(p->value != q->value)
     {
          return false;
     }

     return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
}
