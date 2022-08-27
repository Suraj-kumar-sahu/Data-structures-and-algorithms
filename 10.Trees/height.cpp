#include "trees.h"
#include <iostream>
#include <queue>
using namespace std ;

int height(TreeNode<int>* root){
    if(root ==NULL){
        return 0;
    }
    int ans =0 ;
    for(int i=0;i<root->children.size();i++){
        int childheight = height(root->children[i]);
        if(childheight > ans){
            ans = childheight ;
        }
    }
    return 1+ ans ;
}

TreeNode<int>* takeInputLevelwise(){
    int rootData;
    cout<<"enter data "<<endl;
    cin>>rootData ;
    TreeNode<int>* root =new TreeNode<int>(rootData) ;
    queue<TreeNode<int>*> pendingNodes ;
    pendingNodes.push(root);

    while(pendingNodes.size() !=0){
        TreeNode<int>* front = pendingNodes.front() ;
        pendingNodes.pop() ;
        int numchild ;
        cout<<"enter number of child of "<<front->data<<endl ;
        cin>>numchild ;
        for(int i=0 ;i<numchild;i++){
            int childData ;
            cout<<"enter "<<i<<"th child of "<<front->data<<endl ;
            cin>>childData ;
            TreeNode<int>* child =new TreeNode<int>(childData);
            front->children.push_back(child) ;
            pendingNodes.push(child) ;
        }
    }
    return root ;
}


int main(){

    TreeNode<int>* root = takeInputLevelwise();
    cout<<height(root) ;
}
