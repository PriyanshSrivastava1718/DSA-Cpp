/*
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
void inorder(TreeNode* root, TreeNode*& current) {
if (root == nullptr)
    return;
    inorder(root->left, current);
    root->left = nullptr;    
    current->right = root;   
    current = root;          
    inorder(root->right, current);
}
public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy = new TreeNode(0);
        TreeNode* current = dummy;

        inorder(root, current);

        return dummy->right;
    }
}; */
/*
    Question Type: Binary Tree / BST / Inorder Traversal

    Approach:
    Inorder traversal of a BST gives nodes in sorted order.
    Use a dummy node and connect each visited node to the
    right of the previous node while removing its left child.

    Time Complexity: O(n)
    Space Complexity: O(h)
*/