#include<iostream>

using namespace std;
class Node{

    public:
      int data;
       Node* next;

    Node(int d)
    {
        this -> data= d;
        this ->next = NULL;
    }
};

void insertAthead(Node* &head ,int d)
{
    Node* temp = new Node(d);
    temp->next =head;
    head = temp;
}


void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}
int getLength(Node * head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

void findMiddle(Node *head) {
    int len=getLength(head);
    int ans=len/2;
    Node * temp= head;
    int cnt=0;
    while(cnt<ans)
    {
        temp=temp->next;
        cnt++;
    }
    cout<<"the mid is "<<temp->data<<endl;
    

    
}
int main()
{
    Node * node1=new Node(5);
    Node* head=node1;
     insertAthead(head,4);
    insertAthead(head,3);
    insertAthead(head,2);
    insertAthead(head,1);
    insertAthead(head,6);
    insertAthead(head,8);
    

    cout<<"the mid of linked list is :"<<endl;

    findMiddle(head);

    return 0;
}