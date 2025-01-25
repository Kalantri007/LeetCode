/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int f(TreeNode* node, int prev) {
        if(node==NULL) return 0;

        else if(prev < node->val) prev = node->val;

        int left = f(node->left, prev);
        int right = f(node->right, prev);

       
        return (prev <= node->val) ? (left+right + 1) : (left+right);
    }
    int goodNodes(TreeNode* root) {
        int prev = INT_MIN;
        return f(root,prev);
    }
};