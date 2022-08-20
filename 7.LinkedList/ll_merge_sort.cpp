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
    int len=0 ;
    while(head !=NULL){
        len++ ;
        head = head->next ;
    }
    return len ;
}

Node *mid(Node* head){
    int len = length(head);
    Node *temp =head ;
    int mid = (len-1)/2 ;
    for(int i=0 ;i<mid ;i++){
        temp =temp->next ;
    }
    return temp ;
}

Node *merge(Node *head1 ,Node * head2){
    Node *finalhead = NULL ;
    Node *finaltail = NULL ;
    if(head1 == NULL){
        return head2 ;
    }
    if(head2 ==NULL){
        return head1 ;
    }

    if(head1->data < head2->data){
        finalhead = head1 ;
        finaltail = head1 ;
        head1=head1 ->next ;
    }else{
        finalhead = head2 ;
        finaltail = head2 ;
        head2=head2 ->next ;
    }
    
    while(head1 !=NULL && head2 !=NULL){
        if(head1->data < head2->data){
            finaltail ->next= head1 ;
            finaltail =head1 ;
            head1 =head1 ->next ;
        }else{
            finaltail ->next= head2 ;
            finaltail =head2 ;
            head2 =head2 ->next ;
        }
    }

    if(head1 !=NULL){
        finaltail ->next= head1 ;
            finaltail =head1 ;
            head1 =head1 ->next ;
    }
    if(head2 !=NULL){
        finaltail ->next= head2 ;
            finaltail =head2 ;
            head2 =head2 ->next ;
    }

    return finalhead ;
}

Node *mergeSort(Node *head)
{
    int len = length(head);

    if(len==0 || len==1){
        return head ;
    }
    Node *mid_node = mid(head) ;

    Node *head1 =head ;
    Node *head2= mid_node->next ;
    mid_node ->next =NULL ;

    head1 = mergeSort(head1);
    head2 =mergeSort(head2);

    Node *sorted_head = merge(head1,head2);
    return sorted_head ;
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
		head = mergeSort(head);
		print(head);
	}

	return 0;
}