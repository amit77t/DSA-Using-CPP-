#include<iostream>
#include<vector>
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

bool checkPalindrome(vector<int> arr)
{
    int n=arr.size();
    int s=0; 
    int e=n-1;
    while(s<=e)
    {
        if(arr[s]!=arr[e])
        {
            return 0;
        }
        s++;
        e--;
    }
return 1;
}
bool isPalindrome(Node * head)
{
    vector<int> arr;
    Node* temp = head;
    while(temp!=NULL)
    {
        arr.push_back(temp->data);
        temp=temp->next;
    }
    return checkPalindrome(arr);
} 

int main()
{
    Node * node1=new Node(2);
    Node* head=node1;\
     insertAthead(head,1);
    insertAthead(head,2);
    // insertAthead(head,0);
    // insertAthead(head,1);
   cout<<"Linked before Sorted  : "<<endl;

    print(head);

    cout<<"Linked list after Sorted  :"<<endl;

    if(isPalindrome(head))
    {
       cout<<"yes  it is palindrome";
    }
    else{
        

        cout<<"no it is palindrome ";


    }


    




        return 0;
}