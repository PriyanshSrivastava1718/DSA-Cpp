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
        traverse(node->right, ans);  // 2. Traverse Right Subtree
        ans.push_back(node->val);   // 3. Visit Root
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        traverse(root, ans);
        return ans;
    }
}; 
*/
/*
    Question Type: Binary Tree / Postorder Traversal / DFS

    Approach:
    Use recursive DFS to perform postorder traversal.

    Postorder traversal follows:
    1. Traverse the left subtree.
    2. Traverse the right subtree.
    3. Visit the current root node.

    Store each visited node's value in the answer vector.

    The traversal naturally visits nodes in Left → Right → Root order.

    Time Complexity: O(n)
    Space Complexity: O(h)
    where h is the height of the tree due to the recursion stack.
*/