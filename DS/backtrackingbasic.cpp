#include<iostream>
using namespace std;
void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void fillarray(int *arr,int i , int n , int val){
    if(i==n){
        printArray(arr,n);
        return;
    }
    arr[i]=val;
    fillarray(arr,i+1,n,val+1);
    //backtracking step
    arr[i]=-1*arr[i];
}
int main(){
    int arr[100]={0};
    int n;
    cin>>n;
    fillarray(arr,0,n,1);
    printArray(arr,n);
    return 0;
}
