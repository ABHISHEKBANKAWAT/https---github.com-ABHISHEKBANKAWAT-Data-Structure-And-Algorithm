#include<bits/stdc++.h>
using namespace std;
class LinkedList;
class Node{
    int data;
    Node * next;
    friend LinkedList;
public:
Node(int d):data(d),next(NULL){}
};
class LinkedList{
    Node * head ;
    Node *tail;

    public:
    LinkedList():head(NULL),tail(NULL){}
    void Push_front(int data){
        if(head==NULL){
            Node *n = new Node(data);
            head = tail= n;
            return;
        }
        else{
            Node*n = new Node(data);
            n->next = head;
            head = n;
        }
    }
    void Push_back(int data){
        if(head==NULL){
            Node * n = new Node(data);
            head = tail = n;
            return ;

        }
        else{
            Node * n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }
void insert(int data, int pos ){
    if(pos==0){
        Push_front(data);
        return;
    }
    else{
        Node *temp = head;
        for(int jump = 1;jump<=pos-1;jump++){
            temp=temp->next;
        }
        Node* n = new Node(data);
        n->next = temp->next;
        temp->next= n;

    }
}
    
};
int main(){
    LinkedList L;
    L.Push_front(19);
    L.Push_front(20);
}

