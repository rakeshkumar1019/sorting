#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e){
  int mid=(s+e)/2;
  int i=s;
  int j=mid+1;
  int k=s;
  int temp[100];
  while(i<=mid && j<=e){
    if(arr[i] <arr[j]){
      temp[k]=arr[i];
      i++;
      k++;
    }else{
      temp[k]=arr[j];
      j++;
      k++;
    }
  }
    //after remaining array shoud be directly add the temp array
    while(i<=mid){
      temp[k]=arr[i];
      i++;
      k++;
    }
    while(j<=e){
      temp[k]=arr[j];
      j++;
      k++;
    }
    for(int i=s;i<=e;i++){
      arr[i]=temp[i];
    }

}
void mergesort(int* arr,int s,int e){
  //base case
  //>= becaue we can sort single element ( so till it become single element)
  if(s>=e){
    return;
  }
  int mid=(s+e)/2;
  mergesort(arr,s,mid);
  mergesort(arr,mid+1,e);
  merge(arr,s,e);

}
int main(){
  int n;
  cin>>n;
  int* arr=new int[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  mergesort(arr,0,n-1);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
