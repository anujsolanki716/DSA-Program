#include<bits/stdc++.h>
using namespace std;

int fun_digit(int n){
    int multi = 1;
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        multi = multi*digit;
        sum = sum+digit;

        n = n/10; 
    }
    int answer = multi - sum;
    return answer;
}

int main(){
    int n; 
    cin>>n;
    cout<<fun_digit(n);
    


    return 0;
}