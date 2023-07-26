#include<iostream>
using namespace std;

class node
{
    public:

    int data;
    node * next;

    node(int data_input)
    {
        this->data =data_input;
        this->next = NULL;
    }
};

void printnode(node * &node)
{
    cout<<"value " <<node->data;
    cout<<"address"<<node->next;
}

void printlinkedist(node * &head)
{
    if(head==NULL)
    {
        cout<<"the linked list is still empty!!"<<endl;
        return ;
    }

    node *temp;
    temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<endl;
}

void Insertstart(node *head,int data)
{
    node * temp=new node(data);

    if(head==NULL)
    {
        head = temp;
        return;
    }

    temp->next=head;
    head=temp;
}

void Insertend(node *&head,int data)
{
    node *temp=new node(data);


    if(head==NULL)
    {
        head = temp;
        return;
    }

    node *end;
    end = head;

    while(end->next!=NULL)
    {
        end = end->next;
    }

     end->next = temp;
}


int main()
{

   

   node*head;

    // printlinkedist(head);

    Insertend(head,5);
    Insertend(head,7);
    Insertend(head,8);
    
Insertstart(head,3);
// printlinkedist(head);
Insertstart(head,2);
// printlinkedist(head);
Insertstart(head,9);
Insertstart(head,10);

printlinkedist(head);

    return 0;
}