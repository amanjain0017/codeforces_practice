#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n, m;
        cin>>n>>m;
        
        if(m%2==1)	m--;
        int stability = n*m/2;
        
        cout<<stability<<endl;
    }
    return 0;
}