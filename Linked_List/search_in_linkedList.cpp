#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d)
    {    
        this->data=d;
        this->next=NULL ;
     }
};

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;

}
void print(Node* head)
{
    Node * temp = head;

    while(temp!=NULL)
    { 
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


bool searchInLL(Node * head ,int k)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data==k)
        {
            return true;
            break;
        }
        temp=temp->next;
    }
    return false;
}

int main(){
    Node * node1 = new Node(10);
    Node* head= node1;

    Node* tail = node1;



    insertAtHead(head, 23);
    insertAtHead(head, 24);
    insertAtHead(head, 25);
    insertAtHead(head, 26);
    insertAtHead(head, 27);


    print(head);

    int k=28;

     if(searchInLL(head,k))
    {
        cout<<k<<" present in linked list:"<<endl;
    }
    else
    {
        cout<<k<<" is not present in the linked list:"<<endl;
    }

    


    return 0;
}