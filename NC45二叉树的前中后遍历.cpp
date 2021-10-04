class Solution {
public:
    /**
     * 
     * @param root TreeNode类 the root of binary tree
     * @return int整型vector<vector<>>
     */
    vector<vector<int>> ans;
    vector<int> path;
    void push() {
        ans.push_back(path);
        path.clear();
        return ;
    }
    void preOrder(TreeNode *node) {
        if (node == nullptr) return;
        stack<TreeNode *> sta;
        sta.push(node);
        while (!sta.empty()) {
            TreeNode *t = sta.top();
            sta.pop();
            path.push_back(t->val);
            if (t->right) sta.push(t->right);
            if (t->left) sta.push(t->left);
        }
        return ;
    }
    void inOrder(TreeNode *node) {
        if (node == nullptr) return ;
        stack<TreeNode *> sta;
        TreeNode *cur = node;
        while (cur || !sta.empty()) {
            if (cur) {
                sta.push(cur);
                cur = cur->left;
            } else {
                cur = sta.top();
                sta.pop();
                path.push_back(cur->val);
                cur = cur->right;
            }
        }
        return ;
    }
    void postOrder(TreeNode *node) {
        if (node == nullptr) return ;
        stack<TreeNode *> sta;
        sta.push(node);
        while (!sta.empty()) {
            TreeNode *t = sta.top();
            sta.pop();
            path.push_back(t->val);
            if (t->left) sta.push(t->left);
            if (t->right) sta.push(t->right);
        }
        reverse(path.begin(), path.end());
        return ;
    }
    vector<vector<int> > threeOrders(TreeNode* root) {
        preOrder(root);
        push();
        inOrder(root);
        push();
        postOrder(root);
        push();
        return ans;
    }
};