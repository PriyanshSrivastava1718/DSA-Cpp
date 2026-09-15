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
public:
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int> ans;
        if(root==nullptr)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            for(int i = 0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(i==size-1)
                    ans.push_back(node->val);
                if(node->left!=nullptr)
                    q.push(node->left);
                if(node->right!=nullptr)
                    q.push(node->right);
            }
        }
        return ans;
    }
}; */
/*
    Question Type: Binary Tree Right Side View

    Approach:
    - Use BFS with a queue to traverse the tree level by level.
    - Store the current level's size.
    - Process exactly `size` nodes for each level.
    - The last node of every level (`i == size - 1`) is visible
      from the right side, so add its value to the answer.
    - Push left and right children into the queue for the next level.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/