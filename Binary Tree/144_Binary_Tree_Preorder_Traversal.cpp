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
/* 
class Solution {
private:
    void traverse(TreeNode* node, vector<int>& ans) {
        if (node == nullptr) return;
        
        ans.push_back(node->val);   // 1. Visit Root
        traverse(node->left, ans);   // 2. Traverse Left Subtree
        traverse(node->right, ans);  // 3. Traverse Right Subtree
    }

public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        traverse(root, ans);
        return ans;
    }
}; 
*/
/*
    Question Type: Binary Tree / Preorder Traversal / DFS

    Approach:
    Use recursive DFS to perform preorder traversal.
 
    Preorder traversal follows:
    1. Visit the current root node.
    2. Traverse the left subtree.
    3. Traverse the right subtree.

    Store each visited node's value in the answer vector.

    The traversal naturally visits nodes in Root → Left → Right order.

    Time Complexity: O(n)
    Space Complexity: O(h)
    where h is the height of the tree due to the recursion stack.
*/