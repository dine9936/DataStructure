#include<iostream>

using namespace std;

struct Node
{
    /* data */
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


void printlist(Node *head1){
   
    Node *temp = head1;
    while (temp != NULL)
    {
        /* code */
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void recursivePrintlist(Node *head){
    
    if(head == NULL){
        return;
    }

    cout<<head->data<<" ";

    recursivePrintlist(head->next);
}

Node *insertNode(int data, Node *head){
    Node *newNode = new Node(data);

    newNode->next = head;

    head = newNode;

    return head;
}

int main(){
    int data;
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next = temp1;
    head->next->next = temp2;

    cout<<"Linked List created"<<endl;

    
    cout<< "Enter value to add begin in List ";
    cin>> data;
    head =   insertNode(data, head);

    printlist(head);
    return 0;
}


