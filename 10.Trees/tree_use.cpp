#include "trees.h"
#include <iostream>
#include <queue>
using namespace std ;

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

TreeNode<int> *takeInput(){
    int rootData ;
    cout<<"Enter data "<<endl;
    cin>>rootData ;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    int n;
    cout<<"enter number of children of "<<rootData <<endl ;
    cin>>n ;
    for(int i=0 ;i<n;i++){
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
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
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>* node1 = new TreeNode<int>(2);
    // TreeNode<int>* node2 = new TreeNode<int>(3);

    // root->children.push_back(node1);
    // root->children.push_back(node2);
    TreeNode<int>* root = takeInputLevelwise();
    printLevelwise(root);
}