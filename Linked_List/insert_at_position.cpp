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

void insertAtPosition(Node* &tail,Node* &head, int position, int d )
{
    if(position==1)
    {
        insertAtStart(head,d);
        return;
    }
    Node* temp = head;
    int cnt=1;
    while(cnt< position-1)
    {
        temp=temp->next;
        cnt++;
    }

    if(temp-> next == NULL)
    {
        insertAtEnd(tail,d);
        return;
    }
    

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next =temp->next;
    temp->next = nodeToInsert;
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


  insertAtPosition(tail,head ,4,28);
  print(head);

  
  insertAtPosition(tail,head ,2,98);
  print(head);
  
  
  insertAtPosition(tail,head ,1,15);
  print(head);

  
  insertAtPosition(tail,head ,8,108);
  print(head);



  return 0;
}