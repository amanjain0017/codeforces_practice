#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    string home;
    cin>>home;
    
    vector<string> trip(n);
    for(int i = 0; i<n; i++){
    	cin>>trip[i];
    }	
    
    if(n%2==0)	cout<<"home";
    else		cout<<"contest";
    
    return 0;
}