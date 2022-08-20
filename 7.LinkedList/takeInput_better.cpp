#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {

        this->data = data;
        next = NULL;
    }
};

//take input basic type
Node *takeinput1(){
    int data ;
    cin>>data ;
    Node *head = NULL ;
    while(data !=-1){
        Node *newNode = new Node(data) ;
        if(head == NULL){
            head = newNode ;
        }else{
            Node *temp= head ;
            while(temp->next !=NULL){
                temp =temp->next ;
            }
            temp->next = newNode ;
        }
        cin>>data ;
    }
    return head ;
}

// Taking input better
Node* takeInput2(){
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL ;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode ;
        }
        else
        {
            tail -> next = newNode ;
            tail = newNode ;
        }
        cin >> data;
    }
    return head;
}


void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
    // when the loop is over the value of head will be NULL ,due to which we lost head and will not access our LL again .Thats why we should store our head in temp and travel our LL with the temp .
}

int main()
{
    Node* head = takeInput2() ;
    print(head) ;

    // //statically
    // Node n1(1) ;
    // Node *head = &n1 ;
    // Node n2(2);
    // Node n3(3);
    // Node n4(4);
    // Node n5(5);

    // n1.next = & n2 ;
    // n2.next = & n3 ;
    // n3.next = & n4 ;
    // n4.next = & n5 ;

    // print(head) ;

    // dynamically
    //  Node *n6 = new Node(10) ;
    //  Node *head = n6 ;
    //  Node *n7 = new Node(20) ;
    //  Node *n8 = new Node(30) ;
    //  Node *n9 = new Node(40) ;
    //  Node *n10 = new Node(50) ;

    // n6 ->next = n7 ;
    // n7 ->next = n8 ;
    // n8 ->next = n9 ;
    // n9 ->next = n10 ;

    // print(head) ;

    
}