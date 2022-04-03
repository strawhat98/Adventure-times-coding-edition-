#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node * third = NULL;

    head = new Node;
    second = new Node;
    third = new Node;

    head->value = 1;
    head->next = second;

    second->value = 2;
    second->next = third;

    third->value = 3;
    third->next = NULL;

    Node* temp =head;
   
    while(temp->value>0 || temp->next!=NULL)
    {
        cout<<temp->value<<endl;
        temp=temp->next;
    }
    


    return 0;

}
