#include<iostream>
#include<vector>

using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int val) {
        data = val;
        left = right = NULL;
    }
  static int index;

    static node* buildtree(vector<int>& preorder) {
        index++;

        if (preorder[index] == -1) {
            return NULL;
        }

        node* root = new node(preorder[index]);

        root->left = buildtree(preorder);
        root->right = buildtree(preorder);

        return root;
    }

    void postorder(node* root){
        if (root==NULL){
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";  
    }

  
};



int node::index = -1;

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    node* root = node::buildtree(preorder);
root->postorder(root);


    return 0;
}