#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this-> data=data;
        this->next =NULL;
    }

};
void insertAtStart(Node* &head, int d)
{
    Node* temp =new Node(d);
    temp->next=head;
    head=temp;
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->"<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

void insertAtEnd(Node* &tail , int d)
{
   Node* temp = new Node(d);
   tail->next = temp;
   tail= temp;
}

int main()
{
  Node* node1 = new Node(10);
  Node* head =node1;
  Node* tail = node1;
  print(head);

  insertAtStart(head,12);
  print(head);

  insertAtEnd(tail, 14);
  print(head);

   insertAtStart(head,3);
  print(head);


  return 0;
}