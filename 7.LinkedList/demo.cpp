#include <iostream>
using namespace std;

class Node
{
public:
        int data;
        Node *next;

        Node(int data){
                this -> data = data ;
                next = NULL ;
        }
};

int length(Node *head){
        int len=0 ;
        Node *temp =head ;
        while(temp !=NULL){
                temp = temp ->next ;
                len++ ;
        }
        return len ;
}

int printithNode(Node *head,int lengthf,int i){
        if(lengthf ==0){
                return 0;
        }
        Node* temp = head ;
        while(i<lengthf){
                for(int j=0;j<i;j++){
                        temp = temp->next ;
                }
                return temp->data ;
        }
}


Node* takeInput(){
        int data ;
        cin>>data ;
        Node *head =NULL;
        Node *tail =NULL;
        while(data!=-1){
                Node *newNode = new Node(data) ;
                if(head==NULL){
                        head = newNode ;
                        tail=newNode ;
                }else{
                        tail->next = newNode ;
                        tail = newNode ;
                }
                cin>>data ;
        }
        return head ;
}

void print(Node *head){
        Node *temp =head ;
        while(temp !=NULL){
                cout<<temp->data ;
                temp = temp->next ;
        }
}


int main(){
        Node* head =takeInput();
        print(head) ;
        cout<<endl ;
        int lengthf =length(head);
        cout<<lengthf;
        int i ;
        cin>>i;
        cout<<printithNode(head,lengthf,i) ;
}
