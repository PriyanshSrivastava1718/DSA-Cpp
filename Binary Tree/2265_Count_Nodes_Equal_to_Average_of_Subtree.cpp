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
private:
    int totalCount = 0;
    pair<int, int> dfs(TreeNode* node) 
    {
        if (!node) return {0, 0};
        auto left = dfs(node->left);
        auto right = dfs(node->right);
        int sum = left.first + right.first + node->val;
        int count = left.second + right.second + 1;
        if (node->val == sum / count) 
        {
            totalCount++;
        }
        return {sum, count};
    }
public:
    int averageOfSubtree(TreeNode* root) 
    {
        dfs(root);
        return totalCount;
    }
}; */
/*
    Question Type: Binary Tree / DFS / Tree Subtree

    Approach:
    Use DFS to calculate the sum and number of nodes in the subtree
    rooted at each node.

    For every node:
    1. Recursively calculate the sum and node count of its left subtree.
    2. Recursively calculate the sum and node count of its right subtree.
    3. Include the current node's value and count.
    4. Calculate the subtree average using integer division.
    5. If the current node's value equals the subtree average,
       increment the total count.
    6. Return the subtree sum and node count to the parent.

    A pair is used to return both the subtree sum and node count
    from each DFS call.

    Time Complexity: O(n)
    Space Complexity: O(h)

    where h is the height of the binary tree.
*/