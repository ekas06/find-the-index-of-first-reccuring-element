#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  cout<<"enter number of elements";
  int n;
  cin>>n;
  int a[n];

  cout<<"enter all elements";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

 const int N= 1e6+2;
  int idx[N];
  for(int i=0;i<N;i++){
   idx[i]=-1;
  }
  int minidx=INT_MAX;
  for(int i=0;i<n;i++){
    if(idx[a[i]]==-1){
    idx[a[i]]=i;}
    else{
       minidx=min(minidx,idx[a[i]]);
       
    }
   
    
  }
  cout<<minidx;
 
}