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
        
        traverse(node->left, ans);   // 1. Traverse Left Subtree
        ans.push_back(node->val);   // 2. Visit Root
        traverse(node->right, ans);  // 3. Traverse Right Subtree
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        traverse(root, ans);
        return ans;
    }
}; 
*/
/*
    Question Type: Binary Tree / Inorder Traversal / DFS

    Approach:
    Use recursive DFS to perform inorder traversal.

    Inorder traversal follows:
    1. Traverse the left subtree.
    2. Visit the current root node.
    3. Traverse the right subtree.

    Store each visited node's value in the answer vector.

    The traversal naturally visits nodes in Left → Root → Right order.

    Time Complexity: O(n)
    Space Complexity: O(h)
    where h is the height of the tree due to the recursion stack.
*/