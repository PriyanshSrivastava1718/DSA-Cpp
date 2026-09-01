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
 *//* 
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        if(root==nullptr)
            return nullptr;
        swap(root->left,root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;    
    }
}; */
/*
    Question Type: Binary Tree / DFS / Root-to-Leaf Paths

    Approach:
    Use DFS and keep constructing the number from the root
    to the current node.
    When a leaf node is reached, return the complete number.
    Add the results from the left and right subtrees.

    Time Complexity: O(n)
    Space Complexity: O(h)
*/