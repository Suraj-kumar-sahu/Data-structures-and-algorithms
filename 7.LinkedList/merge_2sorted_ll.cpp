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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    if(head1 == NULL){
        return head2 ;
    }
    if(head2 == NULL){
        return head1 ;
    }

    Node *finalhead =NULL ;
    Node *finaltail =NULL ;
    if(head1->data < head2->data){
            finalhead = head1 ;
            finaltail =head1 ;
            head1=head1->next ;
        }else{
            finalhead = head2 ;
            finaltail =head2 ;
            head2=head2->next ;
        }
    while(head1 !=NULL && head2 !=NULL){
        if(head1->data <= head2->data){
            finaltail->next = head1 ;
            finaltail =head1 ;
            head1=head1->next ;
        }else{
            finaltail->next = head2 ;
            finaltail =head2 ;
            head2=head2->next ;
        }
    }
    if(head1 !=NULL){
        finaltail->next = head1 ;
        
    }
    if(head2 !=NULL){
        finaltail->next = head2 ;
        
    }

    return finalhead ;
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
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
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
}