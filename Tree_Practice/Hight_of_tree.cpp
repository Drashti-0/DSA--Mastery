#include<iostream>
#include<vector>
using namespace std;

int height(node* root){
if(root==NULL){
    return 0;
}

int leftht=heoght(root->left);
int rightht=height(root->right);

maxht=max(leftht,rightht)+1;

return maxht;
}


int main(){
    vector <int> preorder={1,2,-1,3,4,-1,-1,5,-1,-1}
    node* root=buildtree(preorder);

    cout<<height(root)<<endl;
    return 0;
}