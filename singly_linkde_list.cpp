#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
    Node(int val){
        this ->val = val;
        this ->next = NULL;
    }

};

void Insert_at_head(Node* &head, int val){
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
    
}

void print_linked_list(Node* &head){
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val<<endl;
        tmp = tmp->next;
    }
    
}
int main() {
    Node* head = NULL;

    int val;
    while (true)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }
        Insert_at_head(head,val);

        
    }
    print_linked_list(head);
    return 0;
}