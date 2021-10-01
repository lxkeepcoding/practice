class Solution {
public:
 TreeNode *ret;
 bool dfs(TreeNode *root,int o1,int o2)
 {
     if(!root)
         return false;
     bool l=dfs(root->left,o1,o2);
     bool r=dfs(root->right,o1,o2);
     if((l&&r)||((root->val==o1||root->val==o2)&&(l||r)))
     {
         ret=root;
     }
     return l||r||root->val==o1||root->val==o2;
 }
 int lowestCommonAncestor(TreeNode* root, int o1, int o2) {
     dfs(root,o1,o2);
         return ret->val;
 }
};