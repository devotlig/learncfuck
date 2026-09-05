#include<iostream>
#include<vector>
using namespace std;
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
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    void inorder(TreeNode* root,vector<int>& result)
    {
            if(root == nullptr)return ; 
            inorder(root->left,result);
            result.push_back(root->val);
            
            inorder(root->right,result);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        // while(nodebegin->left!=nullptr)//先找到最左边的节点
        // {
        //     nodebegin = nodebegin->left;
        // }
        vector<int> ans;
            // if(root == nullptr)return {}; 
            // ans = inorderTraversal(root->left);
            // ans.push_back(root->val);
            
            // vector<int> righttree = inorderTraversal(root->right);
            // ans.insert(ans.end(),righttree.begin(),righttree.end());
        inorder(root,ans);
        
        
        return ans;
    }
};

int main()
{
    TreeNode * root;
    root = new TreeNode(1,nullptr,new TreeNode(2,new TreeNode(3),nullptr));
    Solution s;
    vector<int> Ans = s.inorderTraversal(root);
    for(auto il = Ans.begin();il!=Ans.end();il++)
    {
        cout<<*il<<" ";
    }
}