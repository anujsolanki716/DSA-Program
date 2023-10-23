#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Binary Number: ";
    cin>>n;
    int ans=0, i=0;
    // while(n!=0){
    //     int digit = n%10;
    //     if(digit==1){
    //         ans = ans+pow(2,i);
    //     }
    //     n = n/10;
    //     i++;
    // }
    while(n!=0){
        int bit = n&1;
        if(bit==1){
            ans = ans+pow(2,i);
        }
        n=n<<1;
        i++;
    }
    cout<<"\nAnswer is: "<<ans<<endl;

    return 0;
}