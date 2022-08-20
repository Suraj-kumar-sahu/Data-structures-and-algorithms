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
		this->next = NULL;
	}
};

int length(Node *head){
    int len=0;
    Node* temp = head ;
    while(temp != NULL){
        len++;
        temp = temp -> next ;
    }
    return len ;
}

Node *appendLastNToFirst(Node *head, int n)
{
    int len =length(head) ;
    if(n==0 || head ==NULL){
        return head ;
    }
    int count = len-n ;
    Node* current = head ;
    for(int i=1;i<count;i++){
        current = current->next ;
    }
    Node *head2 = current->next ;
    current->next = NULL;
    
	Node *temp2 = head2 ;
    while(temp2->next != NULL){
        temp2 = temp2->next ;
}
    temp2->next = head ;
    return head2 ;
    
  
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
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
}