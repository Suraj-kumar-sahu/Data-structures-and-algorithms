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

int length(Node *head)
{
    int length = 0 ;
    Node *temp1 = head ;
    while(temp1!= NULL){
        temp1 = temp1 -> next ;
        length++ ;
    }
    return length ;
}

int helper(Node *head , int i ,int lengthf){
    if(lengthf == 0){
        cout<<"";
    }
    Node *temp =head ;
    while(i< lengthf){
        for(int j=0 ; j<i ; j++){
            temp = temp -> next ;
        }
        return temp ->data;
    }
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

int main()
{
	
    Node *head = takeinput();
    int pos;
    cin >> pos;
    cout<<"length"<< length(head) <<endl;
    int lengthf = length(head) ;
    cout<< helper(head, pos ,lengthf);
    cout << endl;

}