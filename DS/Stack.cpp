#include<bits/stdc++.h>
using namespace std;
struct Stack
{
    int size;
    int top;
    int *s;

};
void create(struct Stack *st)
{
    cout<<"Enter size"<<endl;
    cin>>st->size;
    st->top=-1;
    st->s=new int;

}
void Display(struct  Stack *st)
{
    int i;
    for(i=st->top;i>=0;i--)
    cout<<st->s[i];
    cout<<endl;
}
void push(struct Stack *st,int x){
    if(st->top==st->size-1)
    cout<<"Stack overflow"<<endl;
    else{
        st->top++;
        st->s[st->top]=x;
    }

}

int pop(struct Stack *st){
    int x=-1;
    if(st->top==-1)
    cout<<"Stack underflow"<<endl;
    else{
        x=st->s[st->top--];
    }
    return x;
}

int main(){
    struct Stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    cout<<Display;
}