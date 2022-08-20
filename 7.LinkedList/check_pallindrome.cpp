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

int length(Node *head)
{
    int length = 0 ;
    Node *temp = head ;
    while(temp!= NULL){
        temp = temp -> next ;
        length++ ;
    }
    return length ;
}

Node *reverse(Node *head)
    {
        if(head == NULL || head->next == NULL){
		return head;
        }
    Node *smallhead = reverse(head->next);
    head->next->next =head ;
    head->next =NULL ;
    
    return smallhead ;
    }

bool isPalindrome(Node *head){
    if(head == NULL || head->next == NULL){
		return 1;
        }

    int len =length(head);
    int mid =(len-1)/2 ;
    Node *temp =head ;
    for(int i=0;i<mid;i++){
        temp = temp->next ;
    }
    Node *head2 =temp->next ;
    temp->next=NULL;

    head2 =reverse(head2);

    while(head != NULL && head2 != NULL){
        if(head->data == head2->data){
            return 1 ;
            head =head ->next ;
            head2 =head2->next ;
        }else{
            return 0 ;
        }
    }

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

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		bool ans = isPalindrome(head);

		if (ans==1){ 
            cout << "true";
            }
		if(ans==0){
             cout << "false";
            }
		cout << endl;
	}

	return 0;
}