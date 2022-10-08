class Solution {
public:
    bool helper(TreeNode* root, TreeNode* subRoot) {
        if (subRoot == NULL && root == NULL) return true;
        if (subRoot == NULL || root == NULL) return false;
        if (root->val != subRoot->val) return false;
        return helper(root->left, subRoot->left) && helper(root->right, subRoot->right);
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == NULL) return false;
        bool res = helper(root, subRoot);
        if (res) return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
