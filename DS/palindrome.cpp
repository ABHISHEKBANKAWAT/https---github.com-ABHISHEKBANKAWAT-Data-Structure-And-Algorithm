#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int len=str.length();
    for(int i=0,j=len;i<=len/2,j>=len/2;i++,j--){
        if(str[i]==str[j]){
            return true;
        }
        else{
            return false;
        }
        
    }
}