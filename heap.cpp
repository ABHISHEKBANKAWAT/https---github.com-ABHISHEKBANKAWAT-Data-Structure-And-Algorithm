#include<bits/stdc++.h>
class heap{ 
  vector<int> list;
  public: void add(int item){
    list.push_back(item);
    upheapify(list.size()-1);
  }
  private: void swap(int a,int b){
    int ith  = list.get(a);
    int jth = list.get(b);
    list.set(ith,jth);
    list.set(jth,ith);
  }
  private: void upheapify(int ci){
    int pi = (ci-1)/2;
    if(list.get(pi)>list.get(ci)){
      swap(pi,ci);
      unheapify(pi);
    }
  }
  private: void remove(){
    swap(0,list.size()-1);
    int rv = list.remove(list.size()-1);
    downheapify(0);
  }
  private: downheapify(int pi){
    int c1 = 2*pi+1;
    int c2 = 2*pi+2;
    int mini = pi;
    if(c1<list.size() && list.get(c1)<list.get(mini)){
      mini = c1;
    }
    if(c2<list.size() && list.get(c2)<list.get(mini)){
      mini = c2;
    }
    if(mini!=pi){
      swap(mini,pi);
      downheapify(mini);
    }
  }
  public: int getmin(){
    return list.get(0);
  }
  public: void display(){
    cout<<list;
  }

}