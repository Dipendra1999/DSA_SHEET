#include<bits/stdc++.h>
#define vecout(arr) for(auto x: arr) cout<<x<<" "; cout<<endl;
using namespace std;

void bubblesort(int arr[] , int n){
    if(n==1) return;
    for(int j=0; j<n-1; j++){
        if(arr[j]>arr[j+1]){
            int x=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=x;
        }
    }
    bubblesort(arr,n-1);
}
int main(){
    int arr[]={3,1,3,5,1,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting"<<endl;
    vecout(arr);
    bubblesort(arr,size);
    cout<<"After sorting"<<endl;
    vecout(arr);
}