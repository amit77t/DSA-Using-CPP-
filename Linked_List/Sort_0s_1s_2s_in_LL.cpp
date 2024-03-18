#include<iostream>
using namespace std;
class Node{

public:

    int data;
    Node* next;
    Node(int d)
    {
        this->data =d;
        this->next  = NULL;
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
Node* sortList(Node* head)
{
    Node* zerocount= 0;
     Node* onecount= 0;
      Node* twocount= 0;

      Node* temp=head;

      while(temp!=NULL)
      {
        if(temp->data==0)
        {
            zerocount++;
        }
        else if(temp->data==1)
        {
            onecount++;
        }
        else if(temp->data==2)
        {
            twocount++;
        }

        temp=temp->next;
      }
   temp=head;

   while(temp!=NULL)
   {
    if(zerocount!=0)
    {
        temp->data=0;
        zerocount--;

    }
    else if(onecount!=0)
    {
        temp->data=1;
        onecount--;
    }
    else if(twocount!=0)
    {
        temp->data=2;
        twocount--;
    }
    temp=temp->next;
   }
   return head;

}



int main()
{
    Node * node1=new Node(2);
    Node* head=node1;\
     insertAthead(head,1);
    insertAthead(head,2);
    insertAthead(head,0);
    insertAthead(head,1);
   cout<<"Linked before Sorted  : "<<endl;

    print(head);

    cout<<"Linked list after Sorted  :"<<endl;


    sortList(head);
    print(head);




        return 0;
}