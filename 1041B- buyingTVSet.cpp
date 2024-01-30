#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long a, b, x, y;
    cin>>a>>b>>x>>y;
    
    unsigned long long temp = __gcd(x, y);
    x = x/temp;
    y = y/temp;
    
    cout<<min(a/x, b/y);
    // cout<<ans;
    
    return 0;
}