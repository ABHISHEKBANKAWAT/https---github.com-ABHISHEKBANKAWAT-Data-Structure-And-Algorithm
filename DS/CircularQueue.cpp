#include<bits/stdc++.h>
using namespace std;
struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q=new int;

}
void enqueue(struct Queue *q,int x){
    if((q->rear+1)%q->size==q->front)
    cout<<"Queue is full"<<endl;
    else
    {
        q->rear=(q->rear+1)%q->size;
       q-> Q[q->rear]=x;
    }
}
int dequeue(struct Queue *q)
{
    int x=-1;
    if(q->front==q->rear){
        cout<<"queue is empty"<<endl;
    }
    else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}
void Display(struct Queue q)
{   int i=q.front+1;
   do{
   cout<<q.Q[i]<<endl;
   i=(i+1)%q.size;
   }while(i!=(q.rear+1)%q.size);
}

int main(){
    struct Queue q;
    create(&q,5);
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    enqueue(&q,5);
    Display(q);
    return 0;
}