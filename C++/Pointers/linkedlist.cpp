#include<iostream>

using namespace std;
// A[200] -> 2|300 -> 3|300 ->
// head      first     second
struct Node
{
    int data;
    Node* link;
}

// insert to a empty linked list
Node* A;
A = NULL;

Node* temp = new Node();
temp->data = 2;
temp->link = NULL;

// insert at end
int main()
{

}
