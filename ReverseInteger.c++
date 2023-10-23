#include<bits/stdc++.h>
using namespace std;

int reverse_fun(int n){
    int ans = 0;
    while(n!=0){
        if(ans<INT_MIN/10 || ans>INT_MAX/10){
            return 0;
        }
        int digit = n%10;
        ans = (ans*10)+digit;
        n= n/10;
    }
    return ans;
}

int main(){
    int n; 
    cin>>n;
    int x = reverse_fun(n);
    cout<<x<<endl;
    return 0;
}