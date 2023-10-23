#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int>  intersecton(vector<int>& arr1, vector<int>& arr2){
    vector<int> ans;
    int i=0;
    int j=0;
    int n = arr1.size();
    int m = arr2.size();

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr1(n);
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    vector<int> arr2(m);
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    vector<int> res = intersecton(arr1,arr2);
    for(auto num : res){
        cout<<num<<" ";
    }
    cout<<endl;
    
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//     sort(nums1.begin(), nums1.end());
//     sort(nums2.begin(), nums2.end());
//     vector<int> result;
//     int i = 0, j = 0;
//     while (i < nums1.size() && j < nums2.size()) {
//         if (nums1[i] == nums2[j]) {
//             if (result.empty() || result.back() != nums1[i]) {
//                 result.push_back(nums1[i]);
//             }
//             i++;
//             j++;
//         } else if (nums1[i] < nums2[j]) {
//             i++;
//         } else {
//             j++;
//         }
//     }
//     return result;
// }

// int main() {
//     int n, m;
//     cout << "Enter the size of the first array: ";
//     cin >> n;
//     cout << "Enter the elements of the first array: ";
//     vector<int> nums1(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> nums1[i];
//     }
//     cout << "Enter the size of the second array: ";
//     cin >> m;
//     cout << "Enter the elements of the second array: ";
//     vector<int> nums2(m);
//     for (int i = 0; i < m; ++i) {
//         cin >> nums2[i];
//     }
    
//     vector<int> result = intersection(nums1, nums2);

//     cout << "Intersection: ";
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }
