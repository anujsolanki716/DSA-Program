#include<bits/stdc++.h>
using namespace std;

int duplicate(vector<int> &arr, int n){
    int ans = 0;
    for(int j=0; j<n; j++){
        ans = ans^arr[j];
    }
    for(int j=1; j<n; j++){
        ans = ans^j;
    }
    return ans;
}

int main(){
    int t; 
    cin>>t;
    vector<int> arr(t);
    for(int i=0; i<t; i++){
        cin>>arr[i];
    }
    cout<<duplicate(arr, t)<<" ";

    return 0;
}