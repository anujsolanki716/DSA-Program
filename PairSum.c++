// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> PairSum(vector<int> &arr, int s){
//     vector<vector<int>> ans;
//     for(int i=0; i<arr.size(); i++){
//         for(int j=i+1; j<arr.size(); j++){
//             if(arr[i]+arr[j]==s){
//                 vector<int> temp;
//                 temp.push_back(min(arr[i], arr[j]));
//                 temp.push_back(max(arr[i], arr[j]));
//                 ans.push_back(temp);

//             }
//         }
//     }
//     sort(ans.begin(), ans.end());
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int s;
//     cin>>s;
//     vector<vector<int>> res = PairSum(arr, s);
//     for(auto num : res){
//         cout<<num<<" ";
//     }
//     cout<<endl;
//     return 0;
// }





#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                cout<<i<<" "<<j<<" "<<k<<" ";
            }
        }
    }
    return 0;
}