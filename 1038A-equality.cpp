#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    
    string s;
    cin>>s;
    
    int ans = INT_MAX;
    vector<int> count(k, 0);
    
    for(int i = 0; i<n; i++){
    	count[s[i] - 'A']++;
    }
    
    for(int i = 0; i<k; i++){
    	ans = min(ans, count[i]);
    }
    
    cout<< ans*k << endl;
    return 0;
}