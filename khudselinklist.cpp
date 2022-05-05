#include<bits/stdc++.h>
using namespace std;
struct Node {   
    int data;
    Node *next;
    Node(int d){
        data = d;
        next = NULL;
    }
};
// Node *push(int *head,int data)
// {
//     Node *newNode = new Node(data);
//     if(head == NULL){
//         head = newNode;
//         return head;
//     }else{
//         newNode->next = head;
//         head = newNode;
//         return head;
//     }
// }
Node *insert(Node *head, int data)
{
    Node *current = head;
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
    return head;
}


int main()
{Node *head = NULL;
    head = insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
   // head = push(head, 5);
    return 0;
}




