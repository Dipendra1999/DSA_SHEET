#include<bits/stdc++.h>
using namespace std;
 pair<int,int> getFloorAndCeil(int arr[], int n, int x){
    int a,b;
    a=b=arr[0];
    int i=0;
    int j=n-1;
    int mid;
    while(i<=j){
        mid=(i+j)/2;
        if(arr[mid]==x){
            return {x,x};
        }
        else if(arr[mid]<x){
            a=arr[mid];
            i=mid+1;
        }
        else{
            b=arr[mid];
            j=mid-1;
        }
    }
    return {a,b};
 }
int main() {
	int arr[] = {3, 4, 4, 7, 8, 10};
	int n = 6, x = 5;
	pair<int, int> ans = getFloorAndCeil(arr, n, x);
	cout << "The floor and ceil are: " << ans.first<< " " << ans.second << endl;
	return 0;
}