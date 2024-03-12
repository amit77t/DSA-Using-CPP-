#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};

void insertAtbeg(Node* &head, int d)
{
  Node* temp =new Node(d);
  temp->next=head;
  head=temp;

}

void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* reverse(Node* &head)
{
    Node * prev=NULL;
    Node* curr = head;
    Node* forward =NULL;

    if(head==NULL && head->next== NULL)
    {
        return head;
    }
    while(curr!=NULL)
    {
       forward=curr->next;
       curr->next=prev;
       prev=curr;
       curr= forward;

    }
    head=prev;
}
int main()
{
    Node* node1= new Node(10);
    Node* head = node1;

    insertAtbeg(head,23);
    print(head);
    insertAtbeg(head,45);
    insertAtbeg(head,56);
    insertAtbeg(head,39);
    insertAtbeg(head,20);
    cout<<"before reverse "<<endl;
    print(head);
    reverse(head);
    cout<<"after reverse "<<endl;

    print(head);

    return 0;
}