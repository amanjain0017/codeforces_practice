#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    int coins = 0, r = 0, u = 0;
    for(int i = 0; i<n; i++){
    	if(s[i]=='R')	r++;
    	else			u++;
    	
    	if(u==r and s[i] == s[i+1])		coins++;	
    }
    
    cout<<coins;
    return 0;
}