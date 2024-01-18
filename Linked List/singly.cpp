#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

int main()
{
    node *head = NULL;
    node *one = new node();
    node *two = new node();
    node *three = new node();
    node *four = new node();
    node *newNode = new node();
    node *end = new node();

    /*one = new node();
    two = new node();
    three = new node();*/

    // insertion
    one->data = 1;
    two->data = 2;
    three->data = 3;
    four ->data = 4;
    newNode -> data = 100;
    end -> data = 500;

    end -> next = NULL;
    three->next = end;
    two->next = three;
    four -> next = two;
    one->next = four;
    newNode -> next = one;
    head = newNode;
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // deletion
    head = one;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    temp = head;
    three-> next = NULL;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
