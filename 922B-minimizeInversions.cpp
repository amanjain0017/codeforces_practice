#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        
        vector<int> a(n), b(n);
        for(int i = 0; i<n; i++)	cin>>a[i];
        for(int i = 0; i<n; i++)	cin>>b[i];
        
        unordered_map<int, int> m;
        for(int i = 0; i<n; i++){
        	m[a[i]] = b[i];
        }
        sort(a.begin(), a.end());
        
        for(int i = 0; i<n; i++){
        	cout<<a[i]<<" ";
        }	
        cout<<endl;
        
        for(int i = 0; i<n; i++){
        	cout<<m[a[i]]<<" ";
        }	
        cout<<endl;
        
    }   
    return 0;
}