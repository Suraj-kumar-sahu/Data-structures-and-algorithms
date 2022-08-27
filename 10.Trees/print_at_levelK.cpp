#include "trees.h"
#include <iostream>
#include <queue>
using namespace std ;

int printAtLevelK(TreeNode<int>* root,int k){
    if(root ==NULL){
        return 0;
    }
    if(k==0){
        cout<<root->data ;
    }
    for(int i=0;i<root->children.size();i++){
        printAtLevelK(root->children[i],k-1) ;
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


int main(){

    TreeNode<int>* root = takeInputLevelwise();
    int k ;
    cin>>k ;
    cout<<printAtLevelK(root,k) ;
}
