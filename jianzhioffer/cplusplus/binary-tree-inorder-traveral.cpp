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
#include<iostream>
#include<vector>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0),left(nullptr),right(nullptr){}
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
    TreeNode(int x,TreeNode * left,TreeNode * right):val(x),left(left),right(right){}
};

class Solution {
public:

    void inorder(TreeNode * root,vector<int>& res){
        if(!root){
            return;
        }
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> res;
        inorder(root,res);
        return res;

    }
};

int main(){
    Solution sol;

    TreeNode* treeNode1=new TreeNode(1);
    TreeNode* treeNode2=new TreeNode(2);
    TreeNode* treeNode3=new TreeNode(3);
    TreeNode* treeNode4=new TreeNode(4);
    TreeNode* treeNode5=new TreeNode(5,treeNode1,treeNode2);
    TreeNode* treeNode6=new TreeNode(6,treeNode3,treeNode4);
    TreeNode* treeNode7=new TreeNode(7,treeNode5,treeNode6);

    vector<int> res;
    res =  sol.inorderTraversal(treeNode7);
    for(auto it = res.begin();it!=res.end();it++){
        cout<<*it<<endl;
    }
    return 0;




}