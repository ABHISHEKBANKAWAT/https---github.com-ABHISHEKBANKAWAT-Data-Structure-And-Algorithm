#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node * next;
}*first=NULL;
void create(int a[],int n){
    int i;
    struct Node * t,*last;
    first = new Node;
    first->data=a[0];
    first->next= NULL;
    last=first;
    for(i=1;i<n;i++){
        t=new Node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int count(struct Node *p){
    int count=0;
    while(p!=NULL){
        count++;
        p=p->next;
    }
    return count;
}
int Sum(struct Node *p){
    int sum=0;
    while(p!=0){
        sum = sum+p->data;
        p=p->next;
    }
    return sum;
}
void Display(struct Node *p)
{   
    while(p!=0){
        cout<<p->data<<endl;
        p=p->next;
    }
}
int max(struct Node *p){
    int max=0;
    while(p!=NULL){
        if(p->data>max){
            max=p->data;
            p=p->next;
        }
        else{
            p=p->next;
        }
    }
    return max;
}
struct Node * Search(struct Node *p,int key){
    struct Node *q ;
    while(p!=0){
        if(key==p->data){
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
            q=p;
            p=p->next;
    }
    return 0;

}
void insert(struct Node *p,int index,int x){
    if(index<0||index>count(p))
    return;
   Node * t = new Node;
    t->data = x;
    if(index==0){
        t->next = first;
        first=t;
    }
    else{
        for(int i=0;i<index-1;i++)
        p=p->next;
        t->next=p->next;
        p->next=t;
    }
}
void insertsort(struct Node *p,int x){
    struct Node *t,*q=NULL;
    t = new Node;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
        first = t;
        else{
            while(p && p->data<x){
                q=p;
                p=p->next;
            }
            if(p==first){
                t->next=first;
                first =t;
            }
            else{
                t->next=q->next;
                q->next=t;
            }
        }
}

int main(){
    int a[] = {1,2,3,4};
    create(a,4);
    /*cout<<"Length is "<<count(first)<<endl;;
    cout<<"Sum is "<<Sum(first)<<endl;
    cout<<"Max is "<<max(first)<<endl;
    struct Node *temp;
    temp = Search(first,15);
    if(temp)
    cout<<"key is found "<<temp->data<<endl;
    else
    cout<<"Key is not found "<<endl;;
    */
    insert(first,2,10);
    insertsort(first,0);
    
    Display(first);
}