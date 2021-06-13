#include<bits/stdc++.h>
using namespace std;

void binaryser(int arr[],int n,int x)
{
  int low=0;
  int high=n-1;
  
  while(low<=high)
  {
    int mid=(high+low)/2;
    if(arr[mid]==x)
    {
     cout<< mid;
    return;
    }

    else if(arr[mid]<x)
    
    low=mid+1;
    
    else
    high=mid-1;
     
  }
  cout<< -1;
}

int main()
{
  int n;
  cout<<"length"<<endl;
  cin>>n;
  cout<<"enter array"<<endl;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int x;
  cout<<"enter finding value"<<endl;
  cin>>x;
  binaryser(arr,n,x);
   return 0;
}