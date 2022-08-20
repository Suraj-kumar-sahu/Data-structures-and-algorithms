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

// Taking input
Node* takeInput(){
    int data;
    cin >> data;
    Node *head = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL) //ye loop hume last node tak lene ke liye
            {
                temp = temp->next; //ye temp ko aage badha rha he
            }
            temp->next = newNode; // ye nodes ko link kara rha he
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
        cout << temp->data <<" ";
        temp = temp->next;
    }
    // when the loop is over the value of head will be NULL ,due to which we lost head and will not access our LL again .Thats why we should store our head in temp and travel our LL with the temp .
}

void insertNode(Node* head ,int i ,int data){
    int count =0 ;
    Node* temp = head ;
    while(temp!=NULL && count < i-1){
        temp = temp ->next ;
        count++ ;
    }
    Node *newNode = new Node(data) ;
    Node *a = temp -> next ;
    temp -> next = newNode ;
    newNode -> next = a ;
}

int main()
{
    Node* head = takeInput() ;
    print(head) ;
    int pos;
    cin>>pos ;
    int data ;
    cin>> data ;
    insertNode(head , pos , data ) ;

    print(head) ;

}