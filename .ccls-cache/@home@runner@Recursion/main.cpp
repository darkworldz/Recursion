#include<iostream>
#include<vector>
using namespace std;

int bs(vector<int>arr,int &n,int &k,int s,int e){
  if(s>e) return -1;
  int mid= s+(e-s)/2;
  if(arr[mid]==k) return mid;

   return (arr[mid]<k) ? bs(arr,n,k,mid+1,e) :bs(arr,n,k,s,mid-1);
  
}



int main(){
  vector<int> v{1,2,3,4,5,6,7,8,9,10};
  int n=10;
  int k=9;
  int s=0;
  int e=n-1;
  

  int ans=bs(v,n,k,s,e);
  if(ans){
  cout<<"found at index"<<ans<<endl;
}
  else{
    cout<<"not found"<<endl;
  }
  return 0;
}