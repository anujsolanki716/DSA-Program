#include<bits/stdc++.h>
using namespace std;

void ZeroSort(int arr[], int n){
    int left = 0;
    int right = n-1;
    while(left<right){
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
        if(arr[left]==1 and arr[right]==0 and left<right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
void printOne(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    ZeroSort(arr, n);
    printOne(arr, n);
    
    return 0;
}