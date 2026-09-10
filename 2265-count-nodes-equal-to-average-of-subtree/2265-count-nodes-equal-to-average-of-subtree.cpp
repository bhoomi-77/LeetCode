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
    int ans = 0;

    pair<int, int> solve(TreeNode* root,int&count) {
        if (root == NULL) {
            return {0, 0};
        }

       
      auto[leftSum,leftCount]=solve(root->left,count);
      auto[rightSum,rightCount]=solve(root->right,count);

      
        int sum = leftSum + rightSum + root->val;

     
        int subtreecount = leftCount + rightCount+ 1;
        int average = sum / subtreecount;

        if (average == root->val) {
            ans++;
        }
        return {sum, subtreecount};
    }

    int averageOfSubtree(TreeNode* root) {
        int count=0;
        solve(root,count);
        return ans;
    }
};