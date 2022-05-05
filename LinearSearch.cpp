#include<iostream>
using namespace std;
int LinearSearch(int arr[],int n,int key){
    for(int i = 0 ; i<n;i++){
    {
        if(arr[i]==key)
        return i;
    }
    }
    return -1;
}
int main()
{   
    int arr[]={2,3,4,5,6,7,78};
    int n=sizeof(arr)/sizeof(int);
    int k;
    cin>>k;
    int index = LinearSearch(arr,n,k);
    cout<<index;5
    return 0;
}