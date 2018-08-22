//
// Created by enningxie on 18-8-16.
//

#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
};

class TreePrinter {
public:
    vector<vector<int>> printTree(TreeNode* root) {
        vector<vector<int>> v;
        vector<int> v1;

        queue<TreeNode*> q;

        q.push(root);

        TreeNode* last = nullptr;
        TreeNode* nlast = nullptr;

        last = root;
        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            v1.push_back(temp->val);

            if(temp->left!=nullptr) {
                q.push(temp->left);
                nlast = temp->left;
            }

            if(temp->right!= nullptr) {
                q.push(temp->right);
                nlast = temp->right;
            }

            if(temp==last) {
                v.push_back(v1);
                v1.clear();
                last = nlast;
            }
        }
        return v;
    }
};