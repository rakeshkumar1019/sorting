#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int * &arr,int n){
  for(int i=0;i<n;i++){
    int minInd=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[minInd]){
            minInd=j;
          
      }
    }
    swap(arr[i],arr[minInd]);
  }
}
int main(){
  int n;
  cin>>n;
  int* arr=new int[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  selectionsort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<< " ";
  }
}
