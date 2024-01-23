#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    
    vector<int> a(n);
    unordered_map<int, int> m;
    
    for(int i = 0; i<n; i++){
    	cin>>a[i];
    	m[a[i]]++;
    }
    
    int good = 0, bad = 0;
    for(auto x: m){
    	int pairs = x.second/2;
    	good += pairs*2;
    	bad += x.second - pairs*2;
    }
    
    int ans = good + (bad+1)/2;
    // cout<<good<<" "<<bad;
    cout<<ans<<endl;
    return 0;
}