#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//find minimum and swap
    for(int i=0;i<n-1;i++){
        int minindx=i;

        for(int j=i;j<n;j++){
            if(arr[minindx]>arr[j]){
                minindx=j;
            }
        }
        if(minindx!=i)
        swap(arr[i],arr[minindx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}