#include<iostream>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;

    Node(int data){
        key = data;
        left = right = NULL;
    }
};

// Traversals -> Depth First Traversals(InOrder, PreOrder, PostOrder)

 // 1-> PreOrder Traversal
void preOrderTraversal(Node *root){
    if(root != NULL){
        cout<<root->key<<" ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

// 2-> PostOrder Traversal
void postOrderTraversal(Node *root){
    if(root != NULL){
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->key<<" ";
    }
    
}

// 3-> InOrder Traversal
void inOrderTraversal(Node *root){
    if (root != NULL)
    {
      inOrderTraversal(root->left);
      cout<<root->key<<" ";
      inOrderTraversal(root->right);
    }
    
    
}

// Node at K distance
void nodeAtKDistance(Node *root, int k){
    if(root == NULL)
      return;
    if(k == 0)
      cout<<root->key<<" ";
    else{
        nodeAtKDistance(root->left, k - 1);
        nodeAtKDistance(root->right, k - 1);
    }
}

// Heigth of Tree
int heightOfTree(Node *root){
    if(root == NULL)
       return 0;
    else{
       return max(heightOfTree(root->left), heightOfTree(root->right)) + 1 ;
       }
}

// Creating a Tree
Node * createTree(){
    Node *root = new Node(1);

    Node *first = new Node(2);
    Node *second = new Node(3);
    Node *third = new Node(4);
    Node *four = new Node(5);
    Node *five = new Node(6);
    Node *six = new Node(7);
    Node *seven = new Node(8);

    root->left = first;
    root->right = second;

    first->left = third;
    first->right = four;

    second->left = five;
    second->right = six;

    third->left = seven;

    third->left = seven;

    return root;
}

int main(){
    
    Node *temp = createTree();
    cout<<"InOrder => ";
    inOrderTraversal(temp);
    cout<<endl;
    cout<<"PreOrder => ";
    preOrderTraversal(temp);
    cout<<endl;
    cout<<"PostOrder => ";
    postOrderTraversal(temp);
    cout<<endl;
    cout<<"Node at Distance 2 => ";
    nodeAtKDistance(temp, 2);

    cout<<endl;
    cout<<"Height of Tree => "<<heightOfTree(temp);
    
    return 0;
    
}