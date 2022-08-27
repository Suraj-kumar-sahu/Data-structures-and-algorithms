#include "trees.h"
#include <iostream>
#include <queue>
using namespace std ;

int numNodes(TreeNode<int>* root){
    int ans =1 ;
    for(int i=0;i<root->children.size();i++){
        ans +=numNodes(root->children[i]);
    }
    return ans ;
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

void printTree(TreeNode<int>* root){
    cout<<root->data<<":" ;
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<"," ;
    }
    cout<<endl ;
    for(int i=0 ;i<root->children.size();i++){
        printTree(root->children[i]) ;
    }
}

int main(){

    TreeNode<int>* root = takeInputLevelwise();
    printTree(root);
    cout<<endl;
    cout<<numNodes(root);
}
