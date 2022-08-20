#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;

int length(Node *head){
    int len=0;
    Node* temp = head ;
    while(temp != NULL){
        len++;
        temp = temp -> next ;
    }
    return len ;
}

Node *printReverse(Node *head)
{
    Node *temp =head ;
    if(temp ==NULL){
        return ;
    }
    printReverse(temp->next);
    cout<<temp->data ;
    
}




Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
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
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		head =printReverse(head);
        print(head) ;
		cout << endl;
	}
	return 0;
}