#include<bits/stdc++.h>
using namespace std;

vector<int>  fun_duplicate(vector<int> &arr, int n){
    std::vector<int> ans;
    int count =1;
    if(n==0){
        return ans;
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<n-1; i++){
        if(arr[i]==arr[i+1]){
            count++;
            if(count==2){
                ans.push_back(arr[i]);
                count = 1;
            }
        }
        else{
            count = 1;
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
        

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> asn = fun_duplicate(arr, n);
    for(auto num : asn){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}