/*Exp-17-Linked List 
exp17_1-To create a node*/
#include<iostream>
using namespace std;

class Node
{
    public:
      int val;
      Node*next;

    Node(int data){
        val=data;
        next=NULL;
    }
};

int main()
{
    Node*n=new Node(1);
    cout<<n->val<<" "<<n->next<<endl;
    return 0;
}

/*output:
  1 0*/