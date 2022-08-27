#include <iostream>
#include "trees.h"
#include <queue>
using namespace std ;

void preorder(TreeNode<int>* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" " ;
    for(int i=0;i<root->children.size();i++){
        preorder(root->children[i]) ;
    }
}

TreeNode<int>* takeInputLevelwise(){ 
    int rootData ;
    cout<<"enter data "<<endl ;
    cin>>rootData ;
    TreeNode<int>* root = new TreeNode<int>(rootData) ;
    queue<TreeNode<int>*> pendingNodes ;
    pendingNodes.push(root) ;

    while(pendingNodes.size() !=0){
        TreeNode<int>* front = pendingNodes.front() ;
        pendingNodes.pop() ;
        int numChild;
        cout<<"enter number of child of "<<front->data <<endl;
        cin>>numChild ;
        for(int i=0;i<numChild;i++){
            int childData ;
            cout<<"enter "<<i <<"th child of "<<front->data <<endl;
            cin>>childData ;
            TreeNode<int>* child =new TreeNode<int>(childData) ;
            front->children.push_back(child) ;
            pendingNodes.push(child) ;
        }
    }
    return root ;
}

void printLevelwise(TreeNode<int>* root){
    queue<TreeNode<int>*> pendingNode ;
    pendingNode.push(root) ;
    while(pendingNode.size() !=0){
        TreeNode<int>* front = pendingNode.front() ;
        pendingNode.pop() ;
        cout<<front->data<<":" ;
        for(int i=0 ;i<front->children.size();i++){
            if(i<((front->children.size())-1)){
                cout<<front->children[i]->data<<"," ;
            }else{
                cout<<front->children[i]->data<<"," ;
            }
            pendingNode.push(front->children[i]);
        }
        cout<<endl;
    }
}

int main(){
    TreeNode<int>* root = takeInputLevelwise() ;
    printLevelwise(root) ;
}