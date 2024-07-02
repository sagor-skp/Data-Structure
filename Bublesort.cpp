#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//int s=sizeof(arr)/sizeof(arr[0]);
   // cout<<n;
    for(int i=0;i<n-1;i++){//number of passes
        for(int j=0;j<n-1-i;j++){//for save time
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
      
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}