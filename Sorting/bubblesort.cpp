/*
time complexity O(n2) average worst best

*/

#include<bits/stdc++.h>
#define vecout(arr) for(auto x: arr) cout<<x<<" "; cout<<endl;
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
    }  
}
int main(){
    int arr[]={3,1,3,5,1,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting"<<endl;
    vecout(arr);
    bubble_sort(arr,size);
    cout<<"After sorting"<<endl;
    vecout(arr);

}