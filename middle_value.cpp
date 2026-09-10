#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    int size = 0;
    Node* tmp = head;

    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }

    tmp = head;

    if (size % 2 == 1)
    {
        for (int i = 0; i < size / 2; i++)
        {
            tmp = tmp->next;
        }

        cout << tmp->val << endl;
    }
    else
    {
        for (int i = 0; i < size / 2 - 1; i++)
        {
            tmp = tmp->next;
        }

        cout << tmp->val << " " << tmp->next->val << endl;
    }

    return 0;
}