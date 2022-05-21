#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,time;
    cin>>n>>time;
    char arr[n];
    cin>>arr;
 
    for(int it=0;it<time;it++){
        for(int i=0;i<n-1;i++){
            if(arr[i]=='B'&&arr[i+1]=='G'){
                arr[i]='G';
                arr[i+1]='B';
                i++;
            }
        }
    }
 
    cout<<arr;
 
    return 0;
}