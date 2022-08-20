#include <iostream>
#include <queue>
#include "trees.h"
using namespace std ;

TreeNode<int>* takeInputLevelWise(){
    int rootData ;
    cout<<"enter root data " <<endl;
    cin>> rootData ;
    TreeNode<int>* root = new  TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes ;
    pendingNodes.push(root) ;
    while(pendingNodes.size() !=0){
        TreeNode<int>* front = pendingNodes.front() ;
        pendingNodes.pop() ;
        cout<<"enter no. of children of "<<front ->data <<endl;
        int numChild ;
        cin>> numChild ;
        for(int i=0 ; i <numChild ; i++){
            int childData ;
            cout<<"enter "<<i <<"th child of "<<front -> data <<endl;
            cin>>childData ;
            TreeNode<int>* child = new TreeNode<int>(childData) ;
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root ;
}

TreeNode<int>* takeInput(){
    int rootData ;
    cout<<"enter root data " ;
    cin>> rootData ;

    int n;
    cout<<"enter no. of children of "<<rootData ;
    cin>>n ;

    TreeNode<int>* root = new  TreeNode<int>(rootData);
    for(int i=0 ;i<n ; i++){
        TreeNode<int>* child = takeInput() ;
        root->children.push_back(child) ;
    }
    return root ;
}

void printTreeLevelWise(TreeNode<int>* root){
    queue<TreeNode<int>*> pendingNodes ;
    pendingNodes.push(root) ;
    while(pendingNodes.size() !=0){
        TreeNode<int>* front = pendingNodes.front() ;
        pendingNodes.pop() ;
        cout<<front -> data << ":" ;
        for(int i =0 ;i < front ->children.size() ; i++){
            if(i<(front->children.size()-1)){
            cout<< front -> children[i] -> data <<"," ;
            }else{
                cout<< front -> children[i] -> data <<"," ;
            }
            pendingNodes.push(front->children[i]) ;
        }
        cout<<endl ;
    }
}

void printTree(TreeNode<int>* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<< ":" ;
    for(int i =0 ; i<root-> children.size() ; i++){
        cout<< root->children[i]->data<<","  ;
    }
    cout<<endl;
    for(int i =0 ; i < root->children.size() ; i++){
        printTree(root -> children[i]);
    }
}


int main(){
    // TreeNode<int>* root = new TreeNode<int>(1) ;
    // TreeNode<int>* node1 = new TreeNode<int>(2) ;
    // TreeNode<int>* node2 = new TreeNode<int>(3) ;

    // root -> children.push_back(node1);
    // root -> children.push_back(node2) ;

    TreeNode<int>* root =takeInputLevelWise() ;
    printTree(root) ;
   
}