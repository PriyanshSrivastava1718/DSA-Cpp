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
int solve (TreeNode * root,int current)
{
    if(root==nullptr)
        return 0;
    current = current * 10 + root->val;
    if(root->left==nullptr&&root->right==nullptr)
        return current;
    return solve(root->left,current)+solve(root->right,current);
}
class Solution {
public:
    int sumNumbers(TreeNode* root) 
    {
        return solve(root,0);
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