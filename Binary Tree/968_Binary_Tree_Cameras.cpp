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
class Solution 
{
int cameras = 0;
int dfs(TreeNode*root)
{
    if(root==nullptr)
        return 2;
    int left = dfs(root->left);
    int right = dfs(root->right);
    if(left==0||right==0)
    {
        cameras++;
        return 1;
    }
    if(left==1 || right==1)
    {
        return 2;
    }
    return 0;
}
public:
    int minCameraCover(TreeNode* root) 
    {
        if(dfs(root)==0)
            cameras++;
        return cameras;
    }
}; */
/*
    Question Type: Binary Tree / DFS / Greedy

    Approach:
    Use DFS to determine the state of each node:

    0 -> Node is not covered.
    1 -> Node has a camera.
    2 -> Node is covered.

    Traverse the tree bottom-up.
    - If either child is uncovered, place a camera at the current node.
    - If either child has a camera, the current node is covered.
    - Otherwise, the current node is uncovered.

    Null nodes are considered covered.

    After DFS, if the root is still uncovered, place one final camera
    at the root.

    Time Complexity: O(n)
    Space Complexity: O(h)

    where n is the number of nodes and h is the height of the tree.
*/