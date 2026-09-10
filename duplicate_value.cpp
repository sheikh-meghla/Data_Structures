#include <bits/stdc++.h>
using namespace std;

class Node
{
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
    Node* a = new Node(70);
    Node* b = new Node(30);
    Node* c = new Node(20);

    head->next = a;
    a->next = b;
    b->next = c;

    bool visit[101] = {false};
    bool flag = false;

    Node* tmp = head;

    while (tmp != NULL)
    {
        if (visit[tmp->val] == true)
        {
            flag = true;
            break;
        }

        visit[tmp->val] = true;
        tmp = tmp->next;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}